#ifndef REVERSER_H
#define REVERSER_H
#include<string>
#include <cmath>

class Reverser{
    public:
        Reverser();
        int reverseDigit(int value);
        std::string reverseString(std::string characters);
};

#endif