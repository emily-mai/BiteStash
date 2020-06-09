#ifndef ITEMQUANTITY_CPP
#define ITEMQUANTITY_CPP

#include "itemQuantity.h"

Quantity::Quantity(Item* food,int quantity ,std::string unit):Decorator(food)
{
   amount = quantity;   
   Unit = unit;
}


std::string Quantity::getDescription()
{
   return myItem->getDescription() + "Quantity: " + std::to_string(amount) + " " + Unit + "\n" ;
}

std::string Quantity::getName()
{
   return myItem->getName();
}

std::string Quantity::getLocation()
{
   return myItem->getLocation();
}

#endif
