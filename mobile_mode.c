#include <stdio.h>
int main() 
{
    int profile;
    printf("1. Silent\n2. Vibrate\n3. Loud\nEnter profile: ");
    scanf("%d", &profile);
    switch(profile) {
        case 1: printf("Phone set to Silent.\n"); break;
        case 2: printf("Phone set to Vibrate.\n"); break;
        case 3: printf("Phone set to Loud.\n"); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}
