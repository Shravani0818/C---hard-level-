#include <stdio.h>
#include <string.h>

int main() {
    char color[10];
    printf("Enter traffic light color (RED/YELLOW/GREEN): ");
    scanf("%s", color);

    if(strcmp(color, "RED") == 0)
        printf("STOP!\n");
    else if(strcmp(color, "YELLOW") == 0)
        printf("GET READY!\n");
    else if(strcmp(color, "GREEN") == 0)
        printf("GO!\n");
    else
        printf("Invalid color!\n");

    return 0;
}
