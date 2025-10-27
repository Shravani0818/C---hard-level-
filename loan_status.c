#include <stdio.h>

int main()
{
    int status;
    printf("Loan Status\n");
    printf("1. Pending\n2. Approved\n3. Rejected\n4. Paid Off\n");
    printf("Enter loan status: ");
    scanf("%d", &status);

    switch (status)
    {
    case 1:
        printf("Loan is PENDING.\n");
        break;
    case 2:
        printf("Loan is APPROVED.\n");
        break;
    case 3:
        printf("Loan is REJECTED.\n");
        break;
    case 4:
        printf("Loan is PAID OFF.\n");
        break;
    default:
        printf("Invalid status.\n");
        break;
    }

    return 0;
}
