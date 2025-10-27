#include <stdio.h>
#include <string.h>

int main() 
{
    char cmd[10];
    printf("Enter command (UP/DOWN/STOP): ");
    scanf("%s", cmd);

    if(strcmp(cmd, "UP") == 0)
        printf("Elevator going up.\n");
    else if(strcmp(cmd, "DOWN") == 0)
        printf("Elevator going down.\n");
    else if(strcmp(cmd, "STOP") == 0)
        printf("Elevator stopped.\n");
    else
        printf("Invalid command!\n");

    return 0;
}
