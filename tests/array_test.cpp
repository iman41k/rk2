#include <gtest/gtest.h>
#include "../CrappyArrayInventory.h"

TEST(CrappyArrayInventoryTest, AddItem) {
    CrappyArrayInventory inventory;
    Item sword{"Sword", 100};
    Item shield{"Shield", 50};
    
    inventory.addItem(sword);
    inventory.addItem(shield);
    
    ASSERT_EQ(inventory.getItemCount(), 2);  // Проверяем, что количество предметов в инвентаре равно 2
}

TEST(CrappyArrayInventoryTest, RemoveItem) {
    CrappyArrayInventory inventory;
    Item sword{"Sword", 100};
    
    inventory.addItem(sword);
    inventory.removeItem(sword);
    
    ASSERT_EQ(inventory.getItemCount(), 0);  // Проверяем, что после удаления предмета количество предметов в инвентаре равно 0
}

TEST(CrappyArrayInventoryTest, GetTotalValue) {
    CrappyArrayInventory inventory;
    Item sword{"Sword", 100};
    Item shield{"Shield", 50};
    
    inventory.addItem(sword);
    inventory.addItem(shield);
    
    ASSERT_EQ(inventory.getTotalValue(), 150);  // Проверяем, что суммарная стоимость предметов в инвентаре равна 150
}

int main(int argc, char* argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
