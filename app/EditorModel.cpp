// EditorModel.cpp
//
// ICS 45C Spring 2020
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class

#include "EditorModel.hpp"
#include "EditorException.hpp"


EditorModel::EditorModel()
    :col_num{1}, line_num{1}, line_count{1}
{
    line_content_list.push_back("");
}


int EditorModel::cursorLine() const
{
    return getCurrentLine();
}


int EditorModel::cursorColumn() const
{    
    return getCurrentColumn();
}


int EditorModel::lineCount() const
{
    return getTotalLineCount();
}


const std::string& EditorModel::line(int lineNumber) const
{
    
    
    static std::string remo;
    remo = line_content_list.at(lineNumber-1);
    return remo;
    
    // return typed_string;
}


const std::string& EditorModel::currentErrorMessage() const
{
    return current_error;
}


void EditorModel::setErrorMessage(const std::string& errorMessage)
{
    current_error = errorMessage;
}


void EditorModel::clearErrorMessage()
{
    current_error.clear();
}


// -----------------  Helper Functions ---------------

// gets current column (left and right)
int EditorModel::getCurrentColumn() const
{
    return col_num;
}


void EditorModel::clearTypedWord()
{
    typed_string.clear();
}


void EditorModel::addTypedWord(std::string& typed)
{


    if (line_content_list[getCurrentLine()-1].length() ==0)
    {
        line_content_list[getCurrentLine()-1] += typed;
    }
    else
    {
        line_content_list[getCurrentLine() -1].insert(col_num-1,typed);
    }
    
    moveCursor('R');

   
    
}


const std::string& EditorModel::getStringTyped() const
{
    return typed_string;
}


// gets the total line count
int EditorModel::getTotalLineCount() const
{
    return line_count;
}


// gets current line (up and down)
int EditorModel::getCurrentLine() const
{
    return line_num;
}


void EditorModel::moveCursor(char direction)
{
    if (direction == 'R')
    {
        col_num+=1;
    }
    else if (direction == 'L')
    {
        col_num -= 1;
    }
    else if (direction == 'D')
    {
        line_num += 1;
    }
    else if (direction == 'U')
    {
        line_num -= 1;
    }
}


void EditorModel::addNewLine()
{
    line_content_list.insert(line_content_list.begin()+line_num,"");
    // line_content_list.push_back("");
    line_num++;
    line_count++;
    moveToLocation(1);
}


void EditorModel::moveToLocation(int location) 
{
    col_num = location;
}


bool EditorModel::isEndOfLine() const
{
    if (getCurrentColumn() > line(getCurrentLine()).length())
    {
        return true;
    }
    return false;
}


void EditorModel::deleteAtIndex(unsigned int index)
{
    line_content_list.erase(line_content_list.begin() + index);
    line_num--;
    line_count--;
    moveToLocation(1);
    // line_content_list.at(getCurrentLine()-1).erase(index-1,1);
    // col_num--;
}


void EditorModel::clearLine(unsigned int index)
{
    line_content_list[index] = "";
}