#include <stdio.h>

int main() {
    int status;
    printf("Network Connection Status\n");
    printf("1. Connected\n2. Disconnected\n3. Error\n");
    printf("Enter network status: ");
    scanf("%d", &status);

    switch(status) {
        case 1: printf("Network is CONNECTED.\n"); break;
        case 2: printf("Network is DISCONNECTED.\n"); break;
        case 3: printf("Network ERROR detected!\n"); break;
        default: printf("Invalid status.\n"); break;
    }

    return 0;
}
