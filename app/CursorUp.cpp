// CursorUp.cpp

#include "CursorUp.hpp"

void CursorUp::execute(EditorModel& model)
{
    model.moveCursor('U');
}

void CursorUp::undo(EditorModel& model)
{
    return;
}