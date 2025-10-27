
#include <stdio.h>

int main()
{
    int status;
    printf("Production Machine Status\n");
    printf("1. Operational\n2. Idle\n3. Maintenance\n4. Faulty\n");
    printf("Enter machine status: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Machine is OPERATIONAL.\n");
        break;
    case 2:
        printf("Machine is IDLE.\n");
        break;
    case 3:
        printf("Machine UNDER MAINTENANCE.\n");
        break;
    case 4:
        printf("Machine is FAULTY.\n");
        break;
    default:
        printf("Invalid status.\n");
        break;
    }

    return 0;
}
