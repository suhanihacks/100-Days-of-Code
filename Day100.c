//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Item {
    int id;
    float price;
};

int main() {
    struct Item item1 = {10, 99.99};
    struct Item *item_ptr = &item1;
    float new_price;

    scanf("%f", &new_price);

    item_ptr->price = new_price;

    printf("Item ID: %d\n", item_ptr->id);
    printf("New Price: %.2f\n", item_ptr->price);

    return 0;
}
