#ifndef CRAPPYARRAYINVENTORY_H
#define CRAPPYARRAYINVENTORY_H

#include <string>

class Item {
public:
    std::string name;
    int value;
};

class CrappyArrayInventory {
public:
    CrappyArrayInventory();
    Item* getInventory();
    int getInventorySize();

private:
    Item* items;
};

#endif // CRAPPYARRAYINVENTORY_H
