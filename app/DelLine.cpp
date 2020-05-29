// DelLine.cpp

#include "DelLine.hpp"
#include "EditorException.hpp"

void DelLine::execute(EditorModel& model)
{
    if (model.getCurrentLine() != 1)
    {
    model.deleteAtIndex(model.getCurrentLine()-1);
    
    }
    else
    {
        if (model.line(model.getCurrentLine()).length() == 0)
        {
            throw EditorException("Already Empty");
        }
        model.clearLine(model.getCurrentLine()-1);
        model.moveToLocation(1);

    }
    
}


void DelLine::undo(EditorModel& model)
{

}