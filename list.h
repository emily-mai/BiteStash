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
   std::vector <Item*> myFridgeList;
   std::vector <Item*> myFreezerList;
   std::vector <Item*> myPantryList;
   std::vector <Item*> myList;
   List() { };
   void addItem(Item*);
   void removeItem(std::string);
   virtual void display();
   virtual void sort() { };
};
#endif
