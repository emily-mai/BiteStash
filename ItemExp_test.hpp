#ifndef ITEMEXP_TEST_HPP
#define ITEMEXP_TEST_HPP

#include "item.cpp"
#include "itemExp.cpp"

TEST(expirationTest,test1 )
{
   Item* milk = new Item("Milk", Fridge);
   Expiration* test = new Expiration(milk, "June 9th, 2020");
   EXPECT_EQ(test->getDescription(), "Milk\nLocated in Fridge\nExpiration date: June 9th, 2020\n");
}

#endif
