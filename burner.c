#include <stdio.h>

int main() 
{
    int burner;
    printf("Gas Stove Burner Options\n");
    printf("1. Low Flame\n2. Medium Flame\n3. High Flame\n");
    printf("Enter your choice: ");
    scanf("%d", &burner);

    switch(burner) {
        case 1: printf("Low flame ON.\n"); 
        break;
        case 2: printf("Medium flame ON.\n"); 
        break;
        case 3: printf("High flame ON.\n"); 
        break;
        default: printf("Invalid option.\n"); 
        break;
    }

    return 0;
}
