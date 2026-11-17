#include "SecretNumber.h"

#include <random>
#include <stdexcept>

SecretNumber::SecretNumber(int low, int high)
    : low(low), high(high)
{
    if (low > high) {
        throw std::invalid_argument("The lower bound must not exceed the upper bound.");
    }

    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    std::uniform_int_distribution<int> distribution(low, high);
    value = distribution(generator);
}

int SecretNumber::check(int guess) const
{
    if (guess < value) {
        return -1;
    }
    if (guess > value) {
        return 1;
    }
    return 0;
}
