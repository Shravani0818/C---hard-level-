#include<stdio.h>
#include<string.h>
int main() {
    char mode[10];
    printf("Enter mode (COOL/FREEZE/DEFROST): ");
    scanf("%s", mode);
    if(strcmp(mode,"COOL")==0)
        printf("Cooling mode\n");
    else if(strcmp(mode,"FREEZE")==0)
        printf("Freezing mode\n");
    else if(strcmp(mode,"DEFROST")==0)
        printf("Defrosting...\n");
    else
        printf("Invalid mode!\n");
}
