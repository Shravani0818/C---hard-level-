#include <stdio.h>
#include <string.h>
int main() {
    char command[10];
    printf("Enter a command (ON/OFF): ");
    scanf("%s", command);

    if(strcmp(command, "ON") == 0)
        printf("Light is ON!\n");
    else if(strcmp(command, "OFF") == 0)
        printf("Light is OFF!\n");
    else
        printf("Invalid command!\n");

    return 0;
}
