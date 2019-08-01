#include "riddles.h"

using namespace std;

Riddles::Riddles() {
    cout << endl;
    riddle("What gives you the strength and power to walk through walls?", "door");
    cout << endl;
    riddle("What food goes on and on without a beginning, middle or end?", "donut");
    riddle("What has a head and a tail but no legs?", "coin");
    riddle("What is the answer to life, the universe, and everything?", "42");
}

void Riddles::riddle(const string &question, const string &answer){
    string s;
    string line;
    int guesses = 0;
    bool solved = 0;
    cout << endl <<  question << endl;
    while (getline(cin,line)){
        fixString(s);
        ++ guesses;
        stringstream strstrm {line};
        while (strstrm >> s){
            if (s == answer + "s"  || s == answer) {
                solved = true;
                break;
            }
        }
        if (solved) break;   
    }
    while (guesses >= -1){
        cout << "\u001b[1A\u001b[2K ";
        --guesses;
    }
}

void Riddles::fixString(string &s){
    int len = s.length();
    for (int i = 0; i < len; ++ i){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 'a' - 'A';
        }
    }
}

