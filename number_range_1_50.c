#include <stdio.h>

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 50)
     {
        printf("%d is within the range 1 to 50.\n", num);
    } else 
    {
        printf("%d is NOT within the range 1 to 50.\n", num);
    }

    return 0;
}
