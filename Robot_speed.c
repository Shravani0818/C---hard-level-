#include <stdio.h>
int main()
 {
    int speed;
    printf("1. Slow\n2. Normal\n3. Fast\nEnter speed: ");
    scanf("%d", &speed);
    switch(speed) {
        case 1: printf("Robot moving slowly.\n"); break;
        case 2: printf("Robot moving at normal speed.\n"); break;
        case 3: printf("Robot moving fast.\n"); break;
        default: printf("Invalid speed!\n");
    }
    return 0;
}
