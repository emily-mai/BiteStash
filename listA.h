#ifndef LISTA_H
#define LISTA_H

#include "list.cpp"

class ListA: public List
{
private:
   List* val;
   bool myFunction(Item* a, Item* b ) {return a->getName() < b->getName();};
   //void merge( );
   //void mergeSort();
public:
   ListA(List* a) {val = a; };
   void sort();
   void display();
};
#endif
