#include <stdio.h>

int main()
{
    int currency;
    printf("Currency Selector\n");
    printf("1. Dollar\n2. Euro\n3. Pound\n4. Yen\n");
    scanf("%d", &currency);

    switch (currency)
    {
    case 1:
        printf("You selected DOLLAR.\n");
        break;
    case 2:
        printf("You selected EURO.\n");
        break;
    case 3:
        printf("You selected POUND.\n");
        break;
    case 4:
        printf("You selected YEN.\n");
        break;
    default:
        printf("Invalid currency.\n");
        break;
    }

    return 0;
}
