// CursorDown.hpp
#ifndef CURSOR_DOWN
#define CURSOR_DOWN

#include "Command.hpp"

class CursorDown : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};




#endif