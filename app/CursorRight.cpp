// CursorRight.cpp

#include "CursorRight.hpp"
#include "EditorException.hpp"
#include <iostream>

void CursorRight::execute(EditorModel& model)
{
    try
    {
        // if (model.getCurrentColumn() > model.line(model.getCurrentLine()).length())
        if (model.isEndOfLine() == true && model.getCurrentLine() == model.getTotalLineCount())
        {
            throw EditorException("Already at end");
        }
        else if (model.isEndOfLine() == true)
        {
            model.moveToLocation(1);
            model.moveCursor('D');
            
        }
        else
        {
            model.moveCursor('R');
        }
        
        
    }
    catch(EditorException e)
    {
        throw;
    }
    
    
}

void CursorRight::undo(EditorModel& model)
{
    
    model.moveCursor('L');
}