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
        else
        {
            model.moveCursor('U');
        }
        
    


    }
    catch(EditorException e)
    {
        throw;
    }
    
    
    
}

void CursorUp::undo(EditorModel& model)
{
    model.moveCursor('D');
}