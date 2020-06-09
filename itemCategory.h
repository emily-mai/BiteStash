#ifndef ITEMCATEGORY_H
#define ITEMCATEGORY_H

#include "itemDecorator.hpp"

class Category:public Decorator
{
public:
   Category(Item* food, std::string type);
   virtual std::string getDescription();
   virtual std::string getName();
   virtual std::string getLocation();
protected:
   std::string itemType;
};
#endif

