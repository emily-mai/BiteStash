#ifndef ITEM_CPP
#define ITEM_CPP

#include "item.h"



Item::Item(std::string name, Location locate)
{
   itemName = name;
   myLocation = locate;
   description = name + "\nLocated in the " + getStringEnum(locate) + "\n";
}

std::string Item::getStringEnum(Location locate)
{
   switch (locate)
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




#endif
