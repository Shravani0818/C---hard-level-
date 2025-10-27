#include <stdio.h>

int main()
{
    int seat;
    printf("Airline Seat Class\n");
    printf("1. Economy\n2. Business\n3. First Class\n");
    printf("Enter seat class: ");
    scanf("%d", &seat);

    switch (seat)
    {
    case 1:
        printf("Seat class: ECONOMY\n");
        break;
    case 2:
        printf("Seat class: BUSINESS\n");
        break;
    case 3:
        printf("Seat class: FIRST CLASS\n");
        break;
    default:
        printf("Invalid seat class.\n");
        break;
    }

    return 0;
}
