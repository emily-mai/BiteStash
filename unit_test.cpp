#include "gtest/gtest.h"

#include "item_test.hpp"
#include "ItemExp_test.hpp"
#include "itemQuantity_test.hpp"
#include "ItemCategory_test.hpp"
#include "ListL_test.hpp"
#include "ListA_test.hpp"
#include "Factory_test.hpp"

int main(int argc, char **argv) 
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
