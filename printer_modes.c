#include <stdio.h>

int main()
 {
    int option;
    printf("Printer Options\n");
    printf("1. Print\n2. Scan\n3. Copy\n");
    printf("Enter option: ");
    scanf("%d", &option);

    switch(option) 
    {
        case 1: printf("Printing document \n");
         break;
        case 2: printf("Scanning document \n");
         break;
        case 3: printf("Copying document \n"); 
        break;
        default: printf("Invalid option.\n"); 
        break;
    }

    return 0;
}
