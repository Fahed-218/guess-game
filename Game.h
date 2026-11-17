#ifndef GAME_H
#define GAME_H

#include "SecretNumber.h"

class Game{
    private:

     SecretNumber secret;
     int guesses;
     
    public:

    Game();
    int readGuesses();
    void play();
    int getGuesses()const;
};

#endif