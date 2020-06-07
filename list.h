#ifndef LIST_H
#define LIST_H

#include "item.cpp"
#include "itemExp.cpp"
#include "itemCategory.cpp"
#include "itemQuantity.cpp"
#include <vector>


class List
{
public:
   std::vector <Item*> myList;
//public:
   List() { };
   void addItem(Item*);
   void removeItem(std::string);
   virtual void display();
   virtual void sort() { };
};
#endif
