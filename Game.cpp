#include "Game.h"

#include <iostream>
#include <limits>
#include <stdexcept>

Game::Game()
    : secret(1, 100), guesses(0)
{
}

int Game::readGuesses()
{
    int guess;
    std::cout << "Enter your guess (1-100): ";

    while (!(std::cin >> guess)) {
        if (std::cin.eof()) {
            throw std::runtime_error("Input ended before the secret number was guessed.");
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please enter a valid integer.\n";
        std::cout << "Enter your guess (1-100): ";
    }

    return guess;
}

void Game::play()
{
    std::cout << "Guess the secret number between 1 and 100.\n";

    while (true) {
        const int guess = readGuesses();
        ++guesses;

        const int result = secret.check(guess);
        if (result < 0) {
            std::cout << "Too low. Try again.\n";
        } else if (result > 0) {
            std::cout << "Too high. Try again.\n";
        } else {
            std::cout << "Correct!\n";
            return;
        }
    }
}

int Game::getGuesses() const
{
    return guesses;
}
