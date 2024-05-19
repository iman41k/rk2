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
    Item* item = new Item();
    item->name = "Potion";
    item->value = 20;
    array[0] = *item;

    item = new Item();
    item->name = "Dagger";
    item->value = 30;
    array[1] = *item;

    item = new Item();
    item->name = "Ring";
    item->value = 40;
    array[2] = *item;

    CrappyArrayInventory inventory(array, 3);

    Item* items = inventory.getInventory();

    ASSERT_STREQ(items[0].name.c_str(), "Potion");
    ASSERT_EQ(items[0].value, 20);

    ASSERT_STREQ(items[1].name.c_str(), "Dagger");
    ASSERT_EQ(items[1].value, 30);

    ASSERT_STREQ(items[2].name.c_str(), "Ring");
    ASSERT_EQ(items[2].value, 40);
}
