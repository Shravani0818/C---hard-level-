#include <stdio.h>

int main() 
{
    int grade;
    printf("Enter grade number (1-5): ");
    printf("1. A\n2. B\n3. C\n4. D\n5. F\n");
    scanf("%d", &grade);

    switch(grade) {
        case 1: printf("Excellent A\n"); 
        break;
        case 2: printf("Good B\n");
         break;
        case 3: printf("Average C\n"); 
        break;
        case 4: printf("Below Average D\n"); 
        break;
        case 5: printf("Fail F\n"); 
        break;
        default: printf("Invalid grade.\n");
         break;
    }

    return 0;
}
