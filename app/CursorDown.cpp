// CursorDown.cpp

#include "CursorDown.hpp"

void CursorDown::execute(EditorModel& model)
{
    model.moveCursor('D');
}

void CursorDown::undo(EditorModel& model)
{
    model.moveCursor('U');
}