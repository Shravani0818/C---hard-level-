#include <stdio.h>
int main()
 {
    int speed;
    printf("Fan Speed (1-Low, 2-Medium, 3-High): ");
    scanf("%d", &speed);

    switch(speed) {
        case 1: printf("Fan running at Low speed.\n"); break;
        case 2: printf("Fan running at Medium speed.\n"); break;
        case 3: printf("Fan running at High speed.\n"); break;
        default: printf("Invalid choice!\n");
    }
}
