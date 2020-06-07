#ifndef LISTL_CPP
#define LISTL_CPP

#include "listL.h"
#include <vector>

void listL::sort() 
{
    //std::cout << val->myList.size() << "\n";
    for(int i = 0; i < val->myList.size(); i++)
    {
	Item* item = val->myList.at(i);
	//std::cout << item->getName() << "\n";
	if(item->getLocation() == "Fridge")
        {
		myFridgeList.push_back(item);
        }
	else if(item->getLocation() == "Freezer")
	{
		myFreezerList.push_back(item);
	}
	else 
	{
		myPantryList.push_back(item);
	}
    }    
}

void listL::display()
{
   //std::cout << &val->myList << "\n";
   std::cout << "Fridge items:\n";
   for(int i = 0; i < myFridgeList.size(); ++i) 
   {
	Item* item = myFridgeList.at(i);
	std::cout << i + 1 << ".) " << item->getName() << "\n";
   }
   
   std::cout << "Freezer items:\n";
   for(int i = 0; i < myFreezerList.size(); ++i)
   {
        Item* item = myFreezerList.at(i);
        std::cout << i + 1 << ".) " << item->getName() << "\n";
   }

   std::cout << "Pantry items:\n";
   for(int i = 0; i < myPantryList.size(); ++i)
   {
        Item* item = myPantryList.at(i);
        std::cout << i + 1 << ".) " << item->getName() << "\n";
   }
}
#endif
