#include<stdio.h>
#include<string.h>
int main()
 {
    char cmd[10];
    printf("Enter command (START/STOP): ");
    scanf("%s", cmd);
    if(strcmp(cmd,"START")==0)
        printf("Car Started\n");
    else if(strcmp(cmd,"STOP")==0)
        printf("Car Stopped\n");
    else
        printf("Invalid command!\n");
}
