// BackSpace.hpp
#ifndef BACKSPACE_HPP
#define BACKSPACE_HPP

#include "Command.hpp"

class BackSpace : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};


#endif