#include <stdio.h>
#include <string.h>

int main() {
    char direction[10];
    printf("Enter robot direction (LEFT/RIGHT/FORWARD/BACK): ");
    scanf("%s", direction);

    if(strcmp(direction, "LEFT") == 0)
        printf("Robot turning left.\n");
    else if(strcmp(direction, "RIGHT") == 0)
        printf("Robot turning right.\n");
    else if(strcmp(direction, "FORWARD") == 0)
        printf("Robot moving forward.\n");
    else if(strcmp(direction, "BACK") == 0)
        printf("Robot moving backward.\n");
    else
        printf("Invalid direction!\n");

    return 0;
}
