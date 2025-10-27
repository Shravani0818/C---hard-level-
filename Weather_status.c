#include <stdio.h>

int main()
 {
    int weather;
    printf("Weather Status\n");
    printf("1. Sunny\n2. Rainy\n3. Cloudy\n4. Snowy\n");
    printf("Enter weather number: ");
    scanf("%d", &weather);

    switch(weather) {
        case 1: printf("It's sunny outside.\n"); break;
        case 2: printf("It's raining outside .\n"); break;
        case 3: printf("It's cloudy.\n"); break;
        case 4: printf("It's snowing.\n"); break;
        default: printf("Invalid input.\n"); break;
    }

    return 0;
}
