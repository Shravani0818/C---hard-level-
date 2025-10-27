#include <stdio.h>
int main() 
{
    int level;
    printf("1. Low\n2. Medium\n3. Full\nEnter level: ");
    scanf("%d", &level);
    switch(level) {
        case 1: printf("Battery low!\n"); break;
        case 2: printf("Battery half charged.\n"); break;
        case 3: printf("Battery full.\n"); break;
        default: printf("Invalid input.\n");
    }
    return 0;
}
