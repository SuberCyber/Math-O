#include "mastermind.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "riddles.h"

using namespace std;

int main() {
    string i;
    int wrong = 0;
    int guesses = 0;

    cout << "\u001b[40;1m\u001b[37;1mEnter password:" << endl;

    while (cin >> i){
        ++ guesses;
        // number to match
        if (i == "1047"){
            break;
        } else {
            cout << "\u001b[1A\u001b[2K";
            ++ wrong;
            cout << "This is not the password!" << endl;
        }

        if (wrong >= 4 && (wrong % 4  == 0)){
            cout << "Time is ticking!" << endl;
        }

    }
     while (guesses >= -1){
        cout << "\u001b[1A\u001b[2K \u001b[1A\u001b[2K ";
        --guesses;
    }
    cout << endl << endl << endl << endl << "\u001b[42mCorrect!\u001b[40;1m" << endl;


    Riddles r;

    cout << endl;

    Mastermind mm;
    mm.playGame();


    cout << endl << endl; 
    cout << endl << endl;
    cout << "            \u001b[35;1m     UULL" << endl;
    cout << endl << endl;
    cout << "           -  ..  .  ...  \u001b[37;1m" << endl;  
    cout << endl << endl;

    cout << "Please enter Poke-password:" << endl;

    guesses = 0;

    while (cin >> i){
        ++ guesses;   
        if (i == "help"){
            cout << endl << endl;
            break;
        }
        else {
            cout << "that is not the password" << endl;
        }
    }

    while (guesses >= -10){
        cout << "\u001b[1A\u001b[2K \u001b[1A\u001b[2K ";
        --guesses;
    }

    cout << endl << endl << endl << endl << endl << endl << endl << "\u001b[35mCongratulations for helping the professors!" << endl;
    cout << endl << endl << endl; 

    return 0;
}
