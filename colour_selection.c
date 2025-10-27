#include <stdio.h>

int main()
{
    int color;
    printf("Color Selector\n");
    printf("1. Red\n2. Blue\n3. Green\n4. Yellow\n");
    printf("Enter color number: ");
    scanf("%d", &color);

    switch (color)
    {
    case 1:
        printf("You selected RED.\n");
        break;
    case 2:
        printf("You selected BLUE.\n");
        break;
    case 3:
        printf("You selected GREEN.\n");
        break;
    case 4:
        printf("You selected YELLOW.\n");
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}
