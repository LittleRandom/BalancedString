//
// Created by LittleRandom on 2/26/2020.
//

#include <cstdio>
#include <iostream>
#include "CharStack.h"
#include "PairMatcher.h"
#include <cstring>
#include <string>

using namespace std;

int main(){
    PairMatcher p;
    string str;
    char input1;
    char input2;
    char anotherInput = 'Y';
    cout<< "Insert string: ";
    cin >> str;
    const char *string = str.data();
    cout<< endl << "Check for: ";
   while((anotherInput == 'Y')||(anotherInput =='y')) {
       cin >> input1;
       cin >> input2;
       p.addPair(input1, input2);
       cout << "Anymore? (Y/N): ";
       cin >> anotherInput;
   }
    cout<< endl <<"Testing if string " << str << " is balanced: "<< endl;
    if(p.check(string)) cout<< "TRUE";
    else cout<< "FALSE";
    return 0;
}