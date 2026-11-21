#include <stdio.h>
typedef struct {
    int id;
    char name[20];
    int quantity;
    int price;
} Item;
long long cost(Item x) {
    return (long long)x.quantity * x.price;
}
int main(void) {
    Item item = {101, "Pen", 3, 20};
    printf("%d %s %d %d\n", item.id, item.name,
           item.quantity, item.price);
    printf("Cost = %lld\n", cost(item));
    item.quantity += 2;
    printf("New cost = %lld\n", cost(item));
    return 0;
}

