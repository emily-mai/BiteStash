#ifndef ITEMCATEGORY_CPP
#define ITEMCATEGORY_CPP

#include "itemCategory.h"

Category::Category(Item* food, std::string type):Decorator(food)
{
   itemType = type;
}

std::string Category::getDescription()
{
   return myItem->getDescription() + "Category: " + itemType +"\n" ;
}

std::string Category::getName()
{
   return myItem->getName();
}

std::string Category::getLocation()
{
   return myItem->getLocation();
}

#endif

