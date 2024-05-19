#include <gtest/gtest.h>
#include "CrappyArrayInventory.h"

TEST(CrappyArrayInventoryTest, TestGetInventorySize) {
    CrappyArrayInventory inventory;
    ASSERT_EQ(inventory.getInventorySize(), 2);
}

TEST(CrappyArrayInventoryTest, TestGetInventory) {
    CrappyArrayInventory inventory;
    Item* items = inventory.getInventory();

    ASSERT_STREQ(items[0].name.c_str(), "Sword");
    ASSERT_EQ(items[0].value, 100);

    ASSERT_STREQ(items[1].name.c_str(), "Shield");
    ASSERT_EQ(items[1].value, 50);
}

TEST(CrappyArrayInventoryTest, TestCreateWithDifferentValues) {
    Item* array = new Item[3];
    array[0] = {"Potion", 20};
    array[1] = {"Dagger", 30};
    array[2] = {"Ring", 40};

    CrappyArrayInventory inventory(array, 3);
    Item* items = inventory.getInventory();

    ASSERT_STREQ(items[0].name.c_str(), "Potion");
    ASSERT_EQ(items[0].value, 20);

    ASSERT_STREQ(items[1].name.c_str(), "Dagger");
    ASSERT_EQ(items[1].value, 30);

    delete[] array;
}
