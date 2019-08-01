#ifndef RIDDLES_H_
#define RIDDLES_H_
#include <string>
#include <iostream>
#include <sstream>

class Riddles {
    public:
    Riddles();
    private:
    void riddle(const std::string &question, const std::string &answer);
    void fixString (std::string &s);
};

#endif
