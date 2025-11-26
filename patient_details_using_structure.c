#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    float temperature;
};

int main() {
    struct Patient p;

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);

    printf("Enter Patient Name: ");
    scanf("%s", p.name);

    printf("Enter Patient Temperature: ");
    scanf("%f", &p.temperature);

    printf("\n--- Patient Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Temperature: %.2f\n", p.temperature);

    return 0;
}
