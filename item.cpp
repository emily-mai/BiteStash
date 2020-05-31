#ifndef ITEM_CPP
#define ITEM_CPP

#include "item.h"

Item::Item(std::string name, Location locate)
{
   itemName = name;
   myLocation = locate;
   description = name + ", " + getStringEnum(locate);
}

Item::getStingEnum(Location locate)
{
   switch locate
	{
	   case Freezer: return "Freezer";
	   case Fridge: return "Fridge";
	   case Pantry: return "Pantry";
	   default: throw Exception("Not a proper location");
	}
}

Item::std::string getDescription()
{   
    return description;
}




#endif
