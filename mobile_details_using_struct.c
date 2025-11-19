#include <stdio.h>

struct Mobile {
    char brand[50];
    int storage;
    float price;
};

int main() {
    struct Mobile m;

    printf("Enter Brand: ");
    scanf(" %[^\n]", m.brand);

    printf("Enter Storage (GB): ");
    scanf("%d", &m.storage);

    printf("Enter Price: ");
    scanf("%f", &m.price);

    printf("\n--- Mobile Details ---\n");
    printf("Brand: %s\n", m.brand);
    printf("Storage: %dGB\n", m.storage);
    printf("Price: %.2f\n", m.price);
}
