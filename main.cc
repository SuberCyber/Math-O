#include "mastermind.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "riddles.h"

using namespace std;

int main() {
    string i;
    int wrong = 0;

    cout << "\u001b[40;1m\u001b[37;1mEnter password:" << endl;

    while (cin >> i){
        // number to match
        if (i == "1047"){
            cout << "\u001b[42mCorrect!\u001b[40;1m" << endl;
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
    
    Riddles r;
    
    cout << endl;

    Mastermind mm;
    mm.playGame();
   
    
    cout << endl << endl; 
    cout << endl << endl;
    cout << "            \u001b[35;1m     UULL" << endl;
    cout << endl << endl;
    cout << "                     ..-. .- ... - \u001b[0m" << endl;  
    cout << endl << endl;

    cout << "Please enter Poke-password:" << endl;

    while (cin >> i){
        if (i == "help"){
        cout << endl << endl;
        cout << "congradulatuions for helping the professors!" << endl;
        }
        else {
        cout << "that is not the password" << endl;
        }
    }
    return 0;
}
