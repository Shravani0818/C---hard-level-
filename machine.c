#include <stdio.h>

int main() 
{
    int coffee;
    printf("Coffee Machine\n");
    printf("1. Espresso\n2. Latte\n3. Cappuccino\n");
    printf("Select coffee type: ");
    scanf("%d", &coffee);

    switch(coffee) {
        case 1: printf("Preparing Espresso\n"); 
        break;
        case 2: printf("Preparing Latte\n"); 
        break;
        case 3: printf("Preparing Cappuccino\n"); 
        break;
        default: printf("Invalid choice\n"); 
        break;
    }

    return 0;
}
