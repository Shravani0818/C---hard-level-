#include <stdio.h>

int main()
{
    int shape;
    printf("Shape Selector\n");
    printf("1. Circle\n2. Square\n3. Triangle\n4. Rectangle\n");
    scanf("%d", &shape);

    switch (shape)
    {
    case 1:
        printf("You selected CIRCLE.\n");
        break;
    case 2:
        printf("You selected SQUARE.\n");
        break;
    case 3:
        printf("You selected TRIANGLE.\n");
        break;
    case 4:
        printf("You selected RECTANGLE.\n");
        break;
    default:
        printf("Invalid shape.\n");
        break;
    }

    return 0;
}
