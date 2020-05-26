// CursorUp.cpp

#include "CursorUp.hpp"
#include "EditorException.hpp"

void CursorUp::execute(EditorModel& model)
{
    try
    {

        if (model.getCurrentLine() == 1)
        {
            throw EditorException("Already at top");  
        }
    


    }
    catch(EditorException e)
    {
        throw;
    }
    
    
    model.moveCursor('U');
}

void CursorUp::undo(EditorModel& model)
{
    model.moveCursor('D');
}