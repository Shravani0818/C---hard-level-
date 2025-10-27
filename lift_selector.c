#include <stdio.h>

int main()
 {
    int floor;
    printf("Elevator Floor Selector\n");
    printf("1. Ground\n2. First\n3. Second\n4. Third\n");
    printf("Enter floor number: ");
    scanf("%d", &floor);

    switch(floor) {
        case 1: printf("Going to Ground Floor.\n"); 
        break;
        case 2: printf("Going to First Floor.\n"); 
        break;
        case 3: printf("Going to Second Floor.\n"); 
        break;
        case 4: printf("Going to Third Floor.\n"); 
        break;
        default: printf("Invalid floor.\n");
         break;
    }

    return 0;
}
