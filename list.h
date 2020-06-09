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
  /* friend std::ostream & operator << (std::ostream &out, const List &obj)
   {
	for(int i = 0; i < obj->myList.size(); i++)
	{
	   out << obj->myList.at(i);
	}
	return out;
   }
   friend std::istream & operator >> (std::istream &in, List &obj)
   {
	in >> obj.myList;
	return in;
   }
  */
   virtual void display();
   virtual void sort() { };
};
#endif
