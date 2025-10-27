#include <stdio.h>
int main() {
    int state;
    printf("1. ON\n2. OFF\nEnter choice: ");
    scanf("%d", &state);
    switch(state) {
        case 1: printf("Light is ON.\n"); break;
        case 2: printf("Light is OFF.\n"); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}
