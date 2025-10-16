#include <stdio.h> 
 
int main()  
{ 
    int mode; 
 
    printf("Robot Mode Simulation\n"); 
    printf("1. Idle Mode\n"); 
    printf("2. Active Mode\n"); 
    printf("3. Error Mode\n"); 
    printf("Enter mode number: "); 
    scanf("%d", &mode); 
 
    switch (mode) 
 { 
        case 1: 
            printf("\nRobot is in IDLE mode.\n"); 
            printf("Status: Waiting for commands.\n"); 
            break; 
 
        case 2: 
            printf("\nRobot is in ACTIVE mode.\n"); 
            printf("Status: Performing assigned tasks.\n"); 
            break; 
 
        case 3: 
            printf("\nRobot is in ERROR mode!\n"); 
            printf("Status: Please check sensors or power supply.\n"); 
            break; 
 
        default: 
            printf("\nInvalid mode selected.\n"); 
            printf("Please enter a valid mode.\n"); 
            break; 
    } 
 
    printf("\nEnd of simulation.\n"); 
    return 0; 
} 
 
 
