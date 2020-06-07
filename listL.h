#ifndef LISTL_H
#define LISTL_H

#include "list.cpp"
#include "listA.cpp"

class listL: public List
{
private:
    List* val;
public:
    listL(ListA* b) {val = b->val;};
    listL(List* a) {val = a; };
    void display();
    void sort();
};

#endif
