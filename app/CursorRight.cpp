// CursorRight.cpp

#include "CursorRight.hpp"
#include <iostream>

void CursorRight::execute(EditorModel& model)
{
    model.moveCursor('R');
}

void CursorRight::undo(EditorModel& model)
{
    return;
}