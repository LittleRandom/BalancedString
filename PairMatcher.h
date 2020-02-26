//
// Created by LittleRandom on 2/26/2020.
//

#ifndef CHARSTACK_PAIRMATCHER_H
#define CHARSTACK_PAIRMATCHER_H

#include "CharStack.h"

class PairMatcher {
private:
    int size = 0;
    char *Pairs = new char[size];
    CharStack pairsStack ;

    // Helper Functions
    bool test_End_Pair(char);
    char return_opener(char);
    bool test_opener(char);

public:

    bool check(const char *str);
    void addPair(char, char);

};


#endif //CHARSTACK_PAIRMATCHER_H
