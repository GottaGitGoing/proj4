// CursorNewLine.cpp

#include "CursorNewLine.hpp"

void NewLine::execute(EditorModel& model)
{
    model.addNewLine();
}


void NewLine::undo(EditorModel& model)
{

}