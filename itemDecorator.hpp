#ifndef ITEMDECORATOR_HPP
#define ITEMDECORATOR_HPP

#include "item.cpp"

class Decorator: public Item
{
protected:
   Item* myItem;
public:
   Decorator() { };
   Decorator(Item* food) : myItem(food) { };
   virtual std::string getDescription() { };  
   virtual std::string getName() { };
   virtual std::string getLocation() { };
};


#endif
