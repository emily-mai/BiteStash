#ifndef ITEMQUANTITY_H
#define ITEMQUANTITY_H

#include "itemDecorator.hpp"

class Quantity:public Decorator
{
public:
   Quantity(Item* food, int quantity, std::string unit);
   virtual std::string getDescription();
   virtual std::string getName();
   virtual std::string getLocation();
protected:
   int amount;
   std::string Unit;
};
#endif
