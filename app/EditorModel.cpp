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
    col_num = 1;
}
