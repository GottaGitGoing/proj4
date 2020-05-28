// CursorRight.cpp

#include "CursorRight.hpp"
#include "EditorException.hpp"
#include <iostream>

void CursorRight::execute(EditorModel& model)
{
    try
    {
        if (model.getCurrentColumn() > model.line(model.getCurrentLine()).length())
        {
            throw EditorException("Already at end");
        }
    }
    catch(EditorException e)
    {
        throw;
    }
    
    model.moveCursor('R');
}

void CursorRight::undo(EditorModel& model)
{
    
    model.moveCursor('L');
}