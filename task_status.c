#include <stdio.h>

int main()
{
    int status;
    printf("Task Assignment Status\n");
    printf("1. Not Assigned\n2. Assigned\n3. In Progress\n4. Completed\n");
    printf("Enter task status: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Task is NOT ASSIGNED.\n");
        break;
    case 2:
        printf("Task is ASSIGNED.\n");
        break;
    case 3:
        printf("Task is IN PROGRESS.\n");
        break;
    case 4:
        printf("Task is COMPLETED.\n");
        break;
    default:
        printf("Invalid status.\n");
        break;
    }

    return 0;
}
