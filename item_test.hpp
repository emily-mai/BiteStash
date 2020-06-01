#ifndef ITEM_TEST_HPP
#define ITEM_TEST_HPP

#include "gtest/gtest.h"
#include "item.cpp"

TEST(itemTest, fridge)
{
  std::string carrot = "Carrot";
  Item* test = new Item(carrot, Fridge);
  EXPECT_EQ(test->getDescription(),"Carrot\nLocated in Fridge\n" );
  //std:: cout << test->getDescription();
}

TEST(itemTest, freezer)
{
  std::string iceCream = "Ice Cream";
  Item* test = new Item(iceCream, Freezer);
  EXPECT_EQ(test->getDescription(),"Ice Cream\nLocated in Freezer\n" );
}

TEST(itemTest, pantry)
{
  std::string cookies = "Cookies";
  Item* test = new Item(cookies, Pantry);
  EXPECT_EQ(test->getDescription(),"Cookies\nLocated in Pantry\n" );
}

#endif
