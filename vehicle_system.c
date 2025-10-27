#include <stdio.h>
int main() 
{
    int gear;
    printf("Enter Gear (1-Neutral, 2-Drive, 3-Reverse): ");
    scanf("%d", &gear);

    switch(gear) {
        case 1: printf("Gear set to NEUTRAL.\n"); break;
        case 2: printf("Gear set to DRIVE.\n"); break;
        case 3: printf("Gear set to REVERSE.\n"); break;
        default: printf("Invalid Gear!\n");
    }
}
