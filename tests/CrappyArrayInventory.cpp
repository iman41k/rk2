#include "CrappyArrayInventory.h"

CrappyArrayInventory::CrappyArrayInventory() {
    inventory[0] = {"Sword", 100};
    inventory[1] = {"Shield", 50};
}

CrappyArrayInventory::CrappyArrayInventory(Item* array, int size) {
    for (int i = 0; i < size && i < MAX_INVENTORY_SIZE; i++) {
        inventory[i] = array[i];
    }
}

CrappyArrayInventory::CrappyArrayInventory(const CrappyArrayInventory& other) {
    for (int i = 0; i < MAX_INVENTORY_SIZE; i++) {
        inventory[i] = other.inventory[i];
    }
}

CrappyArrayInventory::CrappyArrayInventory(CrappyArrayInventory&& other) {
    for (int i = 0; i < MAX_INVENTORY_SIZE; i++) {
        inventory[i] = std::move(other.inventory[i]);
    }
}

Item* CrappyArrayInventory::getInventory() {
    return inventory;
}

int CrappyArrayInventory::getInventorySize() {
    return MAX_INVENTORY_SIZE;
}
