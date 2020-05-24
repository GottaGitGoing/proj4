// CursorRight.hpp
#ifndef CURSOR_RIGHT
#define CURSOR_RIGHT

#include "Command.hpp"

class CursorRight : public Command
{
public:

    void execute(EditorModel& model);
    void undo(EditorModel& model);
};












#endif