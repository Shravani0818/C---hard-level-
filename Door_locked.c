#include <stdio.h>
#include <string.h>

int main() {
    char command[10];
    printf("Enter command (LOCK/UNLOCK): ");
    scanf("%s", command);

    if(strcmp(command, "LOCK") == 0)
        printf("Door is Locked.\n");
    else if(strcmp(command, "UNLOCK") == 0)
        printf("Door is Unlocked.\n");
    else
        printf("Invalid command!\n");

    return 0;
}
