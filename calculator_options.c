#include <stdio.h>

int main()
 {
    int choice;
    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
     {
        case 1: printf("You selected ADDITION.\n"); 
        break;
        case 2: printf("You selected SUBTRACTION.\n"); 
        break;
        case 3: printf("You selected MULTIPLICATION.\n"); 
        break;
        case 4: printf("You selected DIVISION.\n"); 
        break;
        default: printf("Invalid choice.\n");
         break;
    }

    return 0;
}
