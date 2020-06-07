#ifndef LISTA_TEST_HPP
#define LISTA_TEST_HPP

#include "item.cpp"
#include "list.cpp"
#include "listA.cpp"

TEST(alphebetSortTest, attempt1)
{
   Item* milk = new Item("Milk", Fridge);
   Item* steak = new Item("Steak", Fridge);
   Item* tomatoe = new Item("Tomatoe", Fridge);
   Item* rice = new Item("Rice", Pantry);
   Item* iceCream = new Item("Ice Cream", Freezer);
   List* myList = new List();
   myList->addItem(milk);
   myList->addItem(steak);
   myList->addItem(tomatoe);
   myList->addItem(rice);
   myList->addItem(iceCream);
   ListA* test = new ListA(myList);
   test->sort();
   test->display();
}



#endif
