#include<stdio.h>
#include<string.h>
int main() {
    char cmd[10];
    printf("Enter pump state (ON/OFF): ");
    scanf("%s", cmd);
    if(strcmp(cmd,"ON")==0)
        printf("Pump turned ON\n");
    else if(strcmp(cmd,"OFF")==0)
        printf("Pump turned OFF\n");
    else
        printf("Invalid input!\n");
}
