#ifndef ITEMCATEGORY_H
#define ITEMCATEGORY_H

#include "itemDecorator.hpp"

class Category:public Decorator
{
public:
   Category(Item* food, std::string type);
   virtual std::string getDescription();

protected:
   std::string itemType;
};
#endif

