#include <stdio.h>
int main() {
    int mode;
    printf("1. Play\n2. Pause\n3. Stop\nEnter mode: ");
    scanf("%d", &mode);
    switch(mode) {
        case 1: printf("Playing song...\n"); break;
        case 2: printf("Music paused.\n"); break;
        case 3: printf("Playback stopped.\n"); break;
        default: printf("Invalid option.\n");
    }
    return 0;
}
