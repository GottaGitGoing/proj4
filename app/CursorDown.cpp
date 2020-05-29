// CursorDown.cpp

#include "CursorDown.hpp"
#include "EditorException.hpp"

void CursorDown::execute(EditorModel& model)
{
    int len_of_up =0;
    try
    {
        if (model.getTotalLineCount() == model.getCurrentLine())
        {
            throw EditorException("Already at bottom");
        }
        else
        {
            len_of_up = model.line(model.getCurrentLine()).length();
            model.moveCursor('D');
            if (len_of_up>model.line(model.getCurrentLine()).length())
            {
                model.moveToLocation(model.line(model.getCurrentLine()).length()+1);
            }
        }
        
    }
    catch(EditorException e)
    {
        throw;
    }
    
    
    // model.moveCursor('D');
    // model.moveToLocation(1);
}

void CursorDown::undo(EditorModel& model)
{
    model.moveCursor('U');
}