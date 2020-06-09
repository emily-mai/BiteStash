#ifndef LIST_TEST_HPP
#define LIST_TEST_HPP

#include "item.cpp"
#include "list.cpp"
#include "itemCategory.cpp"
#include "itemExp.cpp"
#include "itemQuantity.cpp"

TEST(ListTest, normalList)
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
   myList->display();
}
TEST(ListTest, decoratorList)
{
   Item* milk = new Item("Milk", Fridge);
   Expiration* cowMilk = new Expiration(milk, "June 9th, 2020");
   Item* steak = new Item("Steak", Fridge);
   Item* tomatoe = new Item("Tomatoe", Fridge);
   Item* rice = new Item("Rice", Pantry);
   Item* iceCream = new Item("Ice Cream", Freezer);
   List* myList = new List();
   myList->addItem(cowMilk);
   myList->addItem(steak);
   myList->addItem(tomatoe);
   myList->addItem(rice);
   myList->addItem(iceCream);
   myList->display();
}
TEST(ListTest, SingleDecoratorList)
{
   Item* milk = new Item("Milk", Fridge);
   Expiration* cowMilk = new Expiration(milk, "June 9th, 2020");
   List* myList = new List();
   myList->addItem(cowMilk);
   myList->display();
}
#endif
