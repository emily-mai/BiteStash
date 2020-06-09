#ifndef FACTORY_TEST_HPP
#define FACTORY_TEST_HPP

#include "factory.cpp"
#include "item.cpp"
#include "itemExp.cpp"
#include "itemCategory.cpp"
#include "itemQuantity.cpp"
#include "list.cpp"
#include "listA.cpp"
#include "listL.cpp"


TEST(Factorytest, myTest)
{
   Factory* myFac = new Factory();
   myFac->addList("DefaultList");
   myFac->editList("DefaultList");
   myFac->addList("ShoppingList");
   myFac->editList("ShoppingList");
   myFac->editList("DefaultList");
   //myFac->deleteList("DefaultList");
}

#endif
