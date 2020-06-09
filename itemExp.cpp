#ifndef ITEMEXP_CPP
#define ITEMEXP_CPP

#include "itemExp.h"

Expiration::Expiration(Item* food, std::string expire):Decorator(food)
{
   expiration = expire; 
}

std::string Expiration::getDescription()
{
   return myItem->getDescription() + "Expiration date: " + expiration +"\n" ;
}

std::string Expiration::getName() 
{
   return myItem->getName();
}

std::string Expiration::getLocation()
{
   return myItem->getLocation();
}

#endif
