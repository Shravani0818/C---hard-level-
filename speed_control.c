#include <stdio.h>
#include <string.h>

int main() {
    char speed[10];
    printf("Enter fan speed (LOW/MEDIUM/HIGH): ");
    scanf("%s", speed);

    if(strcmp(speed, "LOW") == 0)
        printf("Fan running at low speed.\n");
    else if(strcmp(speed, "MEDIUM") == 0)
        printf("Fan running at medium speed.\n");
    else if(strcmp(speed, "HIGH") == 0)
        printf("Fan running at high speed.\n");
    else
        printf("Invalid speed command!\n");

    return 0;
}
