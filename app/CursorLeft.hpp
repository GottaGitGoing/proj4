// CursorLeft.hpp

#ifndef CURSOR_LEFT
#define CURSOR_LEFT

#include "Command.hpp"


class CursorLeft : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};







#endif