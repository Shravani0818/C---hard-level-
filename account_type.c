#include <stdio.h>

int main()
{
    int type;
    printf("Bank Account Type\n");
    printf("1. Savings\n2. Current\n3. Fixed Deposit\n");
    printf("Enter account type: ");
    scanf("%d", &type);

    switch (type)
    {
    case 1:
        printf("Account type: SAVINGS\n");
        break;
    case 2:
        printf("Account type: CURRENT\n");
        break;
    case 3:
        printf("Account type: FIXED DEPOSIT\n");
        break;
    default:
        printf("Invalid account type.\n");
        break;
    }

    return 0;
}
