//
// Created by LittleRandom on 2/26/2020.
//

#include "CharStack.h"
#include <cstdio>

CharStack::~CharStack() {
    CharNode *iter_first = head;
    if(empty()){}
    else if(size <2){
        delete head;
    } else {
        for (CharNode *iter = iter_first->next; iter->next != nullptr; iter = iter->next) {
            delete iter_first;
            iter_first = iter;
        }
    }
}

bool CharStack::empty() {
    return (!size);
}

int CharStack::length() {
    return size;
}

CharStack::CharStack(CharNode* h) {
    head = h;
}

bool CharStack::peek(char& out) {
    if(empty()) return false;
    else{
        out = this->head->getData();
        return true;
    }
}

bool CharStack::pop(char &out) {
    if(empty())return false;
    else {
        CharNode* next_head=head->next;
        out = this->head->getData();
        delete head;
        head = next_head;
        size--;
        return true;
    }
}

void CharStack::push(char c) {
    CharNode* new_char = new CharNode(c,head);
    head = new_char;
    size++;
}




