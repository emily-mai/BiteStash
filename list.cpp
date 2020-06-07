#ifndef LIST_CPP
#define LIST_CPP

#include "list.h"
#include <vector>

void List:: addItem(Item* a)
{
   myList.push_back(a);
}

void List:: removeItem(std::string name)
{
   bool isFound = false;
   for(unsigned i = 0; i < myList.size(); i++)
   {
	if (myList.at(i)->getName() == name)
	{
	   myList.erase(myList.begin()+i);
	   isFound = true;
	}
   }
   if (isFound)
   {
	std::cout<< "Removed " << name << " from list.\n";
   }
   else
   {
	std::cout<< "Could not find " << name << " in list.\n";
   }
}

void List:: display()
{
   //std::cout << &myList << "\n";
   int k = 1;
   for(int i = 0; i < myList.size(); i++)
   {
	std::cout << k << ".) " << myList.at(i)->getName() << " is located in the " << myList.at(i)->getLocation() << ".\n";
	k++;
   }
}
#endif
