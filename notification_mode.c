#include <stdio.h>
int main() {
    int mode;
    printf("1. Silent\n2. Vibrate\n3. Ring\nEnter mode: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Notifications silenced.\n"); break;
        case 2: printf("Notifications on vibrate.\n"); break;
        case 3: printf("Notifications ringing.\n"); break;
        default: printf("Invalid mode.\n");
    }
    return 0;
}
