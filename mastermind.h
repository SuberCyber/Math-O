#ifndef _MASTERMIND_H_
#define _MASTERMIND_H_
#include <random>
#include <iostream>

struct Mastermind {
    int seed;
    int codeLength;
    const char* code = "0627";
    bool newGame;
    char* guess;
    bool* used;
    int guessLimit = 15;

    Mastermind();
    ~Mastermind();

    void playGame();
    void readInGuess();
    void setCode();
    int checkBlack();
    int checkWhite();
    void printGuess(int black, int white, int guessLeft);
};

#endif
