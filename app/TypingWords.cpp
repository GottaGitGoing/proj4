// TypingWords.cpp

// #include "Keypress.hpp"
#include "TypingWords.hpp"

void  TypeWord::execute(EditorModel& model)
{
    model.addTypedWord(word);
}



void TypeWord::undo(EditorModel& model)
{

}

