#include <gtest/gtest.h>
#include "../CrappyArrayInventory.h"

// Тест 1: Проверка инициализации инвентаря и корректности добавленных предметов.
TEST(CrappyArrayInventoryTest, InitializationTest) {
    CrappyArrayInventory inventory;

    Item* items = inventory.getInventory();
    ASSERT_NE(items, nullptr);  // Проверяем, что массив предметов не нулевой.

    EXPECT_EQ(items[0].name, "Sword");
    EXPECT_EQ(items[0].value, 100);

    EXPECT_EQ(items[1].name, "Shield");
    EXPECT_EQ(items[1].value, 50);
}

// Тест 2: Проверка корректности возвращаемого размера инвентаря.
TEST(CrappyArrayInventoryTest, InventorySizeTest) {
    CrappyArrayInventory inventory;
    EXPECT_EQ(inventory.getInventorySize(), 2);
}

// // Тест 3: Проверка того, что инвентарь содержит ожидаемые предметы.
// TEST(CrappyArrayInventoryTest, InventoryContentTest) {
//     CrappyArrayInventory inventory;

//     Item* items = inventory.getInventory();

//     // Проверяем первый предмет.
//     ASSERT_EQ(items[0].name, "Sword");
//     EXPECT_EQ(items[0].value, 100);

//     // Проверяем второй предмет.
//     ASSERT_EQ(items[1].name, "Shield");
//     EXPECT_EQ(items[1].value, 50);
// }

// Тест для проверки добавления нового предмета в инвентарь
TEST(CrappyArrayInventoryTest, AddItem) {
    CrappyArrayInventory inventory;
    Item newItem = {"Potion", 20};
    inventory.addItem(newItem);

    Item* items = inventory.getInventory();
    ASSERT_EQ(inventory.getInventorySize(), 3);
    ASSERT_EQ(items[2].name, "Potion");
    ASSERT_EQ(items[2].value, 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
