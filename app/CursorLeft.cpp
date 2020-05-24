// CursorLeft.cpp

#include "CursorLeft.hpp"

void CursorLeft::execute(EditorModel& model)
{
    // if model.
    model.moveCursor('L');
}

void CursorLeft::undo(EditorModel& model)
{
    return;
}