#include <stdio.h>

int main() 
{
    int vehicle;
    printf("Vehicle Type Selector\n");
    printf("1. Car\n2. Bike\n3. Bus\n4. Truck\n");
    printf("Enter vehicle number: ");
    scanf("%d", &vehicle);

    switch(vehicle) {
        case 1: printf("You selected CAR.\n"); 
        break;
        case 2: printf("You selected BIKE.\n");
         break;
        case 3: printf("You selected BUS.\n"); 
        break;
        case 4: printf("You selected TRUCK.\n");
         break;
        default: printf("Invalid choice.\n"); 
        break;
    }

    return 0;
}
