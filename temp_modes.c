#include <stdio.h>

int main() 
{
    int mode;
    printf("Room Temperature Modes\n");
    printf("1. Cool\n2. Warm\n3. Hot\n");
    printf("Enter mode number: ");
    scanf("%d", &mode);

    switch(mode) 
    {
        case 1: printf("Room is COOL.\n"); break;
        case 2: printf("Room is WARM.\n"); break;
        case 3: printf("Room is HOT.\n"); break;
        default: printf("Invalid mode.\n"); break;
    }

    return 0;
}
