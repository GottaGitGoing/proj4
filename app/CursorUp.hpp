// CursorUp.hpp
#ifndef CURSOR_UP
#define CURSOR_UP

#include "Command.hpp"

class CursorUp : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};






#endif