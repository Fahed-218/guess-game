#include "Game.h"

#include <exception>
#include <iostream>

int main()
{
    try {
        Game game;
        game.play();
        std::cout << "You guessed the number in " << game.getGuesses() << " guesses.\n";
    } catch (const std::exception& error) {
        std::cerr << "Game error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
