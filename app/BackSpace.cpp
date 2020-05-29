// BackSpace.cpp

#include "BackSpace.hpp"
#include "EditorException.hpp"

void BackSpace::execute(EditorModel& model)
{
    throw EditorException("not implemented");
    // model.deleteAtIndex(model.getCurrentColumn());

}


void BackSpace::undo(EditorModel& model)
{

}