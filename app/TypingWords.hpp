// TypingWords.hpp

#include "Command.hpp"



#ifndef TYPE_HPP
#define TYPE_HPP


// #include <string>

class TypeWord : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);

public:
    std::string word;
};



#endif