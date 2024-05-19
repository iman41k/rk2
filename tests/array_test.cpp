#include <gtest/gtest.h>
#include "../CrappyArrayInventory.h"

// Тест для проверки корректного создания инвентаря
TEST(CrappyArrayInventoryTest, CreateInventory) {
    CrappyArrayInventory inventory;
    Item* items = inventory.getInventory();
    ASSERT_NE(items, nullptr); // Проверяем, что инвентарь был создан
}

// Тест для проверки правильности элементов в инвентаре
TEST(CrappyArrayInventoryTest, InventoryItems) {
    CrappyArrayInventory inventory;
    Item* items = inventory.getInventory();
    ASSERT_EQ(items[0].name, "Sword");
    ASSERT_EQ(items[0].value, 100);
    ASSERT_EQ(items[1].name, "Shield");
    ASSERT_EQ(items[1].value, 50);
}

// Тест для проверки размера инвентаря
TEST(CrappyArrayInventoryTest, InventorySize) {
    CrappyArrayInventory inventory;
    ASSERT_EQ(inventory.getInventorySize(), 2);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
