#ifndef LISTL_TEST_HPP
#define LISTL_TEST_HPP
#include "item.cpp"
#include "list.cpp"
#include "listA.cpp"
#include "listL.cpp"

TEST(LocationSortTest, printingList)
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
   listL* test = new listL(myList);
   test->sort();
   test->display();
}


TEST(LocationSortTest, printingScatteredList)
{
   Item* yogurt = new Item("Yogurt", Fridge);
   Item* apple = new Item("Apple", Fridge);
   Item* tomatoe = new Item("Tomatoe", Fridge);
   Item* rice = new Item("Rice", Pantry);
   Item* chips = new Item("Chips", Pantry);
   Item* iceCream = new Item("Ice Cream", Freezer);
   Item* fish = new Item("Fish", Freezer);
   List* myList = new List();
   myList->addItem(yogurt);
   myList->addItem(apple);
   myList->addItem(tomatoe);
   myList->addItem(rice);
   myList->addItem(chips);
   myList->addItem(iceCream);
   myList->addItem(fish);
   myList->display();
   ListA* test = new ListA(myList);
   test->sort();
   test->display();
   listL* test1 = new listL(test);
   test1->sort();
   test1->display();
}

#endif
