# guess-game

Build and run the game with a C++11-compatible compiler:

```sh
g++ -std=c++11 Game.cpp SecretNumber.cpp main.cpp -o guess-game
./guess-game
```

The game chooses a secret number from 1 to 100 and reports whether each valid
integer guess is too low or too high. Invalid input is rejected without
increasing the guess count.