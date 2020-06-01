#ifndef ITEMEXP_TEST_HPP
#define ITEMEXP_TEST_HPP

#include "item.cpp"
#include "itemExp.cpp"

TEST(expirationTest,MilkExp)
{
   Item* milk = new Item("Milk", Fridge);
   Expiration* test = new Expiration(milk, "June 9th, 2020");
   EXPECT_EQ(test->getDescription(), "Milk\nLocated in the Fridge\nExpiration date: June 9th, 2020\n");
}

TEST(expirationTest,FishExp)
{
   Item* fish = new Item("Fish", Fridge);
   Expiration* test = new Expiration(fish, "June 9th, 2020");
   EXPECT_EQ(test->getDescription(), "Fish\nLocated in the Fridge\nExpiration date: June 9th, 2020\n");
}


TEST(expirationTest,BreadExp)
{
   Item* bread = new Item("Bread", Pantry);
   Expiration* test = new Expiration(bread, "June 9th, 2020");
   EXPECT_EQ(test->getDescription(), "Bread\nLocated in the Pantry\nExpiration date: June 9th, 2020\n");
}
#endif
