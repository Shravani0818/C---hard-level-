#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(password, "08008") == 0)
        printf("Access Granted.\n");
    else
        printf("Access Denied.\n");

    return 0;
}
