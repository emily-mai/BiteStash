#ifndef ITEMQUANTITY_TEST_HPP
#define ITEMQUANTITY_TEST_HPP

#include "item.cpp"
#include "itemQuantity.cpp"

TEST(quantityTest,twoGallonsOfMilk)
{
   Item* milk = new Item("Milk", Fridge);
   Quantity* test = new Quantity(milk, 2 ,"Gallons");
   EXPECT_EQ(test->getDescription(), "Milk\nLocated in the Fridge\nQuantity: 2 Gallons\n");
}

TEST(quantityTest,PoundOfGroundBeef)
{
   Item* meat = new Item("Ground Beef", Freezer);
   Quantity* test = new Quantity(meat, 1 ,"Pounds");
   EXPECT_EQ(test->getDescription(), "Ground Beef\nLocated in the Freezer\nQuantity: 1 Pounds\n");
}

TEST(quantityTest,CanOBeans)
{
   Item* Beans = new Item("can of beans", Pantry);
   Quantity* test = new Quantity(Beans, 10 ,"Cans");
   EXPECT_EQ(test->getDescription(), "can of beans\nLocated in the Pantry\nQuantity: 10 Cans\n");
}

#endif
