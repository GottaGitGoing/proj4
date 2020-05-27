// EditorModel.cpp
//
// ICS 45C Spring 2020
// Project #4: People Just Love to Play with Words
//
// Implementation of the EditorModel class

#include "EditorModel.hpp"
#include "EditorException.hpp"


EditorModel::EditorModel()
{
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
    static std::string removeThis = "BooEdit!";
    return removeThis;
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
    throw EditorException("");
}


// -----------------  Helper Functions ---------------

// gets current column (left and right)
int EditorModel::getCurrentColumn() const
{
    return col_num;
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
