// CursorEnd.hpp
#ifndef CURSOR_END
#define CURSOR_END

#include "Command.hpp"

class CursorEnd : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};


#endif