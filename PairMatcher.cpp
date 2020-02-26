//
// Created by LittleRandom on 2/26/2020.
//

#include "PairMatcher.h"
#include <string>


bool PairMatcher::check(const char *str) {
     std::string test_string = str;
     char peek;
     int size = test_string.length();
     for(int length = 0; length < size; length ++){
         if(test_End_Pair(test_string.back())){                         // found a pair
            char opener = return_opener(test_string.back());            // finds the closer
            pairsStack.push(opener);                                    // pushes the opener
         }

         pairsStack.peek(peek);                                     // peeks at the stack

         if(test_opener(test_string.back())) {                          // checks if current char is an opener
             if (peek == test_string.back()) {                          // checks head of stack matches curent char
                 pairsStack.pop(peek);                              //  if true: pop it
             } else return false;                                       // if it is opener but doesn't match stack, then
         }                                                              // is false
         test_string.pop_back();                                        // pop the test_string
     }
     return pairsStack.empty();                                         // if the stack is empty, then it is true;
}

void PairMatcher::addPair(char op, char cl) {
    char *add_Pair = new char[size+2];
    for(int i = 0; i<size; i++){
        add_Pair[i] = Pairs[i];
    }
    size += 2;
    add_Pair[size - 1] = cl;
    add_Pair[size - 2] = op;
    delete[] Pairs;
    Pairs = add_Pair;
}

bool PairMatcher::test_End_Pair(char test_char) {
    for(int i = 1; i<size; i+=2){
        if(test_char == Pairs[i]){
            return true;
        }
    }
    return false;
}

char PairMatcher::return_opener(char closer) {
    for(int i =1; i<size ; i+=2){
        if(closer == Pairs[i]){
            return Pairs[i-1];
        }
    }
    return Pairs[0];
}

bool PairMatcher::test_opener(char op) {
    for(int i =0; i<size ; i+=2){
        if(op == Pairs[i]){
            return true;
        }
    }
    return false;
}

