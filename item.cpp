#ifndef ITEM_CPP
#define ITEM_CPP

#include "item.h"

Item::Item(std::string name, Location locate)
{
   itemName = name;
   myLocation = locate;
   description = name + "\nLocated in the " + getLocation() + "\n";
}

std::string Item::getLocation()
{
   switch (myLocation)
	{
	   case Freezer: return "Freezer";
	   case Fridge: return "Fridge";
	   case Pantry: return "Pantry";
	}
}

std::string  Item::getDescription()
{   
    return description;
}

std::string Item:: getName()
{
   return itemName;
}
/*
bool Item::operator <(const Item& a)
{
   if (this->getName() < a.itemName )
	{
	   return true;
	}
   else {return false;}
}
*/
#endif
