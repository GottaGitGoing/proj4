// CursorHome.hpp
#ifndef CURSOR_HOME
#define CURSOR_HOME

#include "Command.hpp"

class CursorHome : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};


#endif