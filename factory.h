#ifndef FACTORY_H
#define FACTORY_H

#include "list.cpp"
#include "listL.cpp"
#include "listA.cpp"
#include "item.cpp"
#include "itemExp.cpp"
#include "itemCategory.cpp"
#include "itemQuantity.cpp"

class Factory
{
public:
   Factory(){};
   void editList(std::string);
   void deleteList(std::string);
   void addList(std::string);
   void displayList(List*);
   void displayList(std::string);
   void sortList(std::string);
private:
   void addItem(List*);
   void removeItem(List*);
};

#endif
