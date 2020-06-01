#ifndef ITEMEXP_H
#define ITEMEXP_H

#include "itemDecorator.hpp"

class Expiration:public Decorator
{
public:
   Expiration(Item* food, std::string expire );
   virtual std::string getDescription();

protected:
   std::string expiration;
};
#endif
