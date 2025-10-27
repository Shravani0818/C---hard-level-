#include <stdio.h>

int main()
{
    int dept;
    printf("Employee Department Selector\n");
    printf("1. HR\n2. Finance\n3. IT\n4. Marketing\n");
    printf("Enter department number: ");
    scanf("%d", &dept);

    switch (dept)
    {
    case 1:
        printf("Employee works in HR.\n");
        break;
    case 2:
        printf("Employee works in Finance.\n");
        break;
    case 3:
        printf("Employee works in IT.\n");
        break;
    case 4:
        printf("Employee works in Marketing.\n");
        break;
    default:
        printf("Invalid department.\n");
        break;
    }

    return 0;
}
