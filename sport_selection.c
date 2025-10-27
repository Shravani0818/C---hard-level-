#include <stdio.h>

int main() 
{
    int sport;
    printf("Sports Selector\n");
    printf("1. Football\n2. Basketball\n3. Tennis\n4. Cricket\n");
    printf("Enter sport number: ");
    scanf("%d", &sport);

    switch(sport) {
        case 1: printf("You selected FOOTBALL.\n"); break;
        case 2: printf("You selected BASKETBALL.\n"); break;
        case 3: printf("You selected TENNIS.\n"); break;
        case 4: printf("You selected CRICKET.\n"); break;
        default: printf("Invalid choice.\n"); break;
    }

    return 0;
}
