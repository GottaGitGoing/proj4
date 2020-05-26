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
                break;
            case 'U':
                return Interaction::command(new CursorLeft());
            case 'K':
                return Interaction::command(new CursorDown());
            case 'I':
                return Interaction::command(new CursorUp());
            case 'Y':
                return Interaction::command(new CursorHome());

            }
        }
        else
        {
            // The user pressed a normal key (e.g., 'h') without holding
            // down Ctrl; react accordingly
        }
    }
}

