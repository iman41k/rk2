#include <string>

struct Item {
    std::string name;
    int value;
};

class CrappyArrayInventory {
public:
    CrappyArrayInventory();
    CrappyArrayInventory(Item* array, int size);
    constexpr CrappyArrayInventory(const CrappyArrayInventory& other);
    constexpr CrappyArrayInventory(CrappyArrayInventory&& other);

    Item* getInventory();
    int getInventorySize();

private:
    static const int MAX_INVENTORY_SIZE = 2;
    Item inventory[MAX_INVENTORY_SIZE];
};
