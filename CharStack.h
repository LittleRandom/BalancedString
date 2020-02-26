//
// Created by LittleRandom on 2/26/2020.
//

#ifndef ECE309_SPR20_CHARSTACK_H
#define ECE309_SPR20_CHARSTACK_H


class CharStack {
private:
    class CharNode{
    private:
        char data;
    public:
        CharNode * next;
        CharNode(char d, CharNode* n = nullptr):data(d),next(n){};
        char getData(){ return data; };

    };
    CharNode* head;
    int size=0;
public:
    CharStack(CharNode* h = nullptr);
    ~CharStack();
    bool empty();
    int length();
    bool peek(char&);
    bool pop(char&);
    void push(char c);

};


#endif //ECE309_SPR20_CHARSTACK_H
