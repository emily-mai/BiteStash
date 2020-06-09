#ifndef ITEM_CPP
#define ITEM_CPP

#include "item.h"

Item::Item(std::string name, Location locate)
{
   itemName = name;
   myLocation = locate; 
   if(locate == Freezer)
   {
	location = "Freezer";
   }
   else if(locate == Fridge)
   {
	location = "Fridge";
   }
   else 
   {
	location = "Pantry";
   }
   description = name + "\nLocated in the " + getLocation() + "\n";
}

std::string Item::getLocation()
{
   /*switch (myLocation)
	{
	   case Freezer: return "Freezer";
	   case Fridge: return "Fridge";
	   case Pantry: return "Pantry";
	}*/
    return location;
}

std::string  Item::getDescription()
{   
    return description;
}

std::string Item::getName() 
{	
    return itemName;
}
#endif
