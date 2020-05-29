// CursorUp.cpp

#include "CursorUp.hpp"
#include "EditorException.hpp"

void CursorUp::execute(EditorModel& model)
{
    int len_of_down = 0;
    try
    {

        if (model.getCurrentLine() == 1)
        {
            throw EditorException("Already at top");  
        }
        else
        {
            len_of_down = model.line(model.getCurrentLine()).length();
            model.moveCursor('U');
            if (len_of_down>model.line(model.getCurrentLine()).length())
            {
                model.moveToLocation(model.line(model.getCurrentLine()).length()+1);
            }
            
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