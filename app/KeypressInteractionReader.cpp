// KeypressInteractionReader.cpp
//
// ICS 45C Spring 2020
// Project #4: People Just Want to Play with Words
//
// Implementation of the KeypressInteractionReader
//
// YOU WILL NEED TO IMPLEMENT SOME THINGS HERE

#include "KeypressInteractionReader.hpp"
#include "CursorRight.hpp"
#include "CursorLeft.hpp"
#include "CursorDown.hpp"
#include "CursorUp.hpp"
#include "CursorHome.hpp"
#include "BooEditLog.hpp"
#include "EditorModel.hpp"
#include <string>
#include "TypingWords.hpp"
#include "CursorNewLine.hpp"
#include "CursorEnd.hpp"
#include "BackSpace.hpp"
#include "DelLine.hpp"

// You will need to update this member function to watch for the right
// keypresses and build the right kinds of Interactions as a result.
//
// The reason you'll need to implement things here is that you'll need
// to create Command objects, which you'll be declaring and defining
// yourself; they haven't been provided already.
//
// I've added handling for "quit" here, but you'll need to add the others.

Interaction KeypressInteractionReader::nextInteraction()
{
    while (true)
    {
        Keypress keypress = keypressReader.nextKeypress();
        // std::string a;
        if (keypress.ctrl())
        {
            // The user pressed a Ctrl key (e.g., Ctrl+X); react accordingly

            switch (keypress.code())
            {
            case 'X':
                return Interaction::quit();
            case 'Z':
                return Interaction::undo();
            case 'O':
                return Interaction::command(new CursorRight());
            case 'U':
                return Interaction::command(new CursorLeft());
            case 'K':
                return Interaction::command(new CursorDown());
            case 'I':
                return Interaction::command(new CursorUp());
            case 'Y':
                return Interaction::command(new CursorHome());
            case 'J':
                return Interaction::command(new NewLine());
            case 'M':
                return Interaction::command(new NewLine());
            case 'P':
                return Interaction::command(new CursorEnd());
            case 'H':
                return Interaction::command(new BackSpace());
            case 'D':
                return Interaction::command(new DelLine());
            }
        }
        else
        {
            // a = keypress.code();
            // booEditLog(a);
            TypeWord* word_class = new TypeWord();
            word_class->word = keypress.code();
            return Interaction::command( word_class);
            // word_class->word = keypress.code();
            // return word_class;
            // EditorModel::addTypedWord(keypress.code());
            
            
            // a= keypress.code();
            
            // return Interaction::command(new TypingWords());
            // The user pressed a normal key (e.g., 'h') without holding
            // down Ctrl; react accordingly
        }
    }
}

