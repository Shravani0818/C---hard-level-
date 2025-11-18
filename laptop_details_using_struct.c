#include <stdio.h>

struct Laptop {
    char brand[50];
    int RAM;
    float price;
};

int main() {
    struct Laptop l;

    printf("Enter Laptop Brand: ");
    scanf("%s", l.brand);

    printf("Enter RAM (in GB): ");
    scanf("%d", &l.RAM);

    printf("Enter Price: ");
    scanf("%f", &l.price);

    printf("\n--- Laptop Details ---\n");
    printf("Brand: %s\n", l.brand);
    printf("RAM: %dGB\n", l.RAM);
    printf("Price: %.2f\n", l.price);

    return 0;
}
