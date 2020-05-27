// TypingWords.hpp

#include "Command.hpp"

class TypeWord : public Command
{
public:
    void execute(EditorModel& model);
    void undo(EditorModel& model);
};