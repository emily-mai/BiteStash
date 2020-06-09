#ifndef LISTA_H
#define LISTA_H

#include "list.cpp"
#include <vector>
#include <string>
#include <cstring>


class ListA: public List
{
private:
   //List* val;
   //std::vector <Item*> myItems;
   bool myFunction(Item* , Item* );
   void merge(std::vector<Item*>&, int,int,int );
   void mergeSort(std::vector<Item*>&,int,int );
public:
   std::vector <Item*> myItems;
   List* val;
   ListA(List* a) {val = a;};
   void sort();
   void display();
};
#endif
