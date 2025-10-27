#include <stdio.h>
int main() 
{
    int vol;
    printf("1. Mute\n2. Low\n3. High\nEnter volume: ");
    scanf("%d", &vol);
    switch(vol) {
        case 1: printf("Speaker muted.\n"); break;
        case 2: printf("Volume low.\n"); break;
        case 3: printf("Volume high.\n"); break;
        default: printf("Invalid volume.\n");
    }
    return 0;
}
