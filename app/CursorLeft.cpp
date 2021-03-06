// CursorLeft.cpp

#include "CursorLeft.hpp"
#include "EditorException.hpp"
#include <exception>

void CursorLeft::execute(EditorModel& model)
{
    try
    {
       
        if (model.getCurrentColumn() ==1 && model.getCurrentLine() == 1)
        {
            throw EditorException("Already at beginning");
        }
        
        
    }
    catch(EditorException e)
    {
        throw;
    }

    // makes cursor go up and to the end of line
    if (model.getCurrentLine() != 1 && model.getCurrentColumn() ==1)
    {
        model.moveCursor('U');
        
        
        model.moveToLocation(model.line(model.getCurrentLine()).length()+1);
        
        
        
        // model.moveCursor('U');

    }
    else
    {
        model.moveCursor('L');
    }
    
    
    
    
    
        
    
    
    
    
    
}

void CursorLeft::undo(EditorModel& model)
{
    model.moveCursor('R');
}