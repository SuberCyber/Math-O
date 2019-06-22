#include "mastermind.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void fixString (string & s){
    int len = s.length();
    for (int i = 0; i < len; ++ i){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 'a' - 'A';
        }
    }
}

int main(int argc, char** argv) {
    string i;
    int num;
    string s;
    cout << "Enter passwords:" << endl;
    bool passwordPie = false;
    bool password1047 = false;
    int wrong = 0;
    while (cin >> i){
        // number to match
        if (i == "314159"){
            passwordPie = true;  
            if (password1047) break;
            cout << "Correct! There is one more password to find" << endl;
        } else if (i == "1047"){
            password1047 = true;
            if (passwordPie) break;
            cout << "Correct! There is one more password to find" << endl;
        } else {
            ++ wrong;
            cout << "Keep looking!" << endl;
        }

        if (wrong >= 4){
            if (!password1047){
            cout << "Time is ticking!" << endl;
            } else {
            cout << "Check your math!" << endl;
            }
        }
    }
    cout << "What gives you the strength and power to walk through walls?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "doors" || s == "door") break;
    } 
    cout << "What food goes on and on without a beginning, middle or end?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "donuts" || s == "donut") break;
    }
    cout << "What has a head and a tail but no legs?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "coins" || s == "coin") break;
    } 
    cout << "What is the answer to life, the universe, and everything?" << endl;
    while (cin >> num){
        if (num == 42) break;
    }
    cout << endl << endl;
    cout << 271 << endl;
    cout << endl << endl;
    Mastermind mm {2};
    mm.playGame();
    cout << endl << endl; 
    cout << endl << endl;
    cout << "UULL" << endl;
    cout << "math" << endl;  
    return 0;
}
