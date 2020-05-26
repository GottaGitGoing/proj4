// CursorHome.cpp

#include "CursorHome.hpp"

void CursorHome::execute(EditorModel& model)
{
    while(model.getCurrentColumn() !=1)
    {
        model.moveCursor('L');
    }
}


void CursorHome::undo(EditorModel& model)
{

}