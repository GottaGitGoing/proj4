// CursorDown.cpp

#include "CursorDown.hpp"
#include "EditorException.hpp"

void CursorDown::execute(EditorModel& model)
{
    try
    {
        if (model.getTotalLineCount() == model.getCurrentLine())
        {
            throw EditorException("Already at bottom");
        }
    }
    catch(EditorException e)
    {
        throw;
    }
    
    
    model.moveCursor('D');
}

void CursorDown::undo(EditorModel& model)
{
    model.moveCursor('U');
}