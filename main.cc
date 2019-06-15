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
    int i;
    string s;
    while (cin >> i){
        // number to match
        if (i == 314) break;
    }
    cout << "What gives you the strength and power to walk through walls?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "doors") break;
    } 
    cout << "What food goes on and on without a beginning, middle or end?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "donuts") break;
    }
    cout << "What has a head and a tail but no legs?" << endl;
    while (cin >> s){
        fixString(s);
        if (s == "coins") break;
    } 
    cout << "What is the answer to life, the universe, and everything?" << endl;
    while (cin >> i){
        if (i == 42) break;
    }

    srand(time(0));
    Mastermind mm {rand() % 5 + 1};
    mm.playGame(); 
    return 0;
}
