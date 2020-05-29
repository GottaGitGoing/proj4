// DelLine.hpp
#ifndef DEL_HPP
#define DEL_HPP

#include "Command.hpp"

class DelLine : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};


#endif