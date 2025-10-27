#include <stdio.h>

int main()
{
    int status;
    printf("Server Status Checker\n");
    printf("1. Running\n2. Stopped\n3. Maintenance\n4. Error\n");
    printf("Enter server status: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Server is RUNNING.\n");
        break;
    case 2:
        printf("Server is STOPPED.\n");
        break;
    case 3:
        printf("Server UNDER MAINTENANCE.\n");
        break;
    case 4:
        printf("Server ERROR detected!\n");
        break;
    default:
        printf("Invalid status.\n");
        break;
    }

    return 0;
}
