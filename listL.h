#ifndef LISTL_H
#define LISTL_H

#include "list.cpp"

class listL: public List
{
private:
    List* val;
public:
    //listL() {};
    listL(List* a) {val = a; };
    void display();
    void sort();
};

#endif
