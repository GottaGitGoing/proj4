// CUrsorNewLine.hpp
#ifndef CURSOR_NEWLINE
#define CURSOR_NEWLINE

#include "Command.hpp"

class NewLine : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};

#endif