#include <stdio.h>

int main()
{
    int method;
    printf("Shipping Method\n");
    printf("1. Air\n2. Sea\n3. Rail\n4. Road\n");
    scanf("%d", &method);

    switch (method)
    {
    case 1:
        printf("Shipping Method: AIR\n");
        break;
    case 2:
        printf("Shipping Method: SEA\n");
        break;
    case 3:
        printf("Shipping Method: RAIL\n");
        break;
    case 4:
        printf("Shipping Method: ROAD\n");
        break;
    default:
        printf("Invalid method\n");
        break;
    }
    return 0;
}
