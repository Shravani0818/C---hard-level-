#include <stdio.h>

struct Car {
    char brand[20];
    char model[20];
    int year;
};

int main() {
    struct Car c;

    printf("Enter Car Brand: ");
    scanf("%s", c.brand);

    printf("Enter Car Model: ");
    scanf("%s", c.model);

    printf("Enter Manufacturing Year: ");
    scanf("%d", &c.year);

    printf("\n--- Car Details ---\n");
    printf("Brand: %s\n", c.brand);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);

    return 0;
}
