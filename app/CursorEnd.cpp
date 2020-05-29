// CursorEnd.cpp

#include  "CursorEnd.hpp"

void CursorEnd::execute(EditorModel& model)
{
    while (model.isEndOfLine() == false)
    {
        model.moveCursor('R');
    }
}


void CursorEnd::undo(EditorModel& model)
{

}