#ifndef ITEMCATEGORY_TEST_HPP
#define ITEMCATEGORY_TEST_HPP

#include "item.cpp"
#include "itemCategory.cpp"

TEST(categoryTest,CtgyDairy)
{
   Item* milk = new Item("Milk", Fridge);
   Category* test = new Category(milk, "Dairy");
   EXPECT_EQ(test->getDescription(), "Milk\nLocated in the Fridge\nCategory: Dairy\n");
}

TEST(categoryTest,CtgyProtien)
{
   Item* steak = new Item("Steak", Fridge);
   Category* test = new Category(steak, "Protein");
   EXPECT_EQ(test->getDescription(), "Steak\nLocated in the Fridge\nCategory: Protein\n");
}

TEST(categoryTest,CtgyProduce)
{
   Item* tomatoe = new Item("Tomatoe", Fridge);
   Category* test = new Category(tomatoe, "Produce");
   EXPECT_EQ(test->getDescription(), "Tomatoe\nLocated in the Fridge\nCategory: Produce\n");
}

TEST(categoryTest,CtgyGrains)
{
   Item* rice = new Item("Rice", Pantry);
   Category* test = new Category(rice, "Grains");
   EXPECT_EQ(test->getDescription(), "Rice\nLocated in the Pantry\nCategory: Grains\n");
}

TEST(categoryTest,CtgySnacks)
{
   Item* iceCream = new Item("Ice Cream", Freezer);
   Category* test = new Category(iceCream, "Snacks");
   EXPECT_EQ(test->getDescription(), "Ice Cream\nLocated in the Freezer\nCategory: Snacks\n");
}

#endif

