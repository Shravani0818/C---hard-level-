#include<stdio.h>
#include<string.h>
int main() {
    char status[10];
    printf("Enter status (LOW/MEDIUM/FULL): ");
    scanf("%s", status);
    if(strcmp(status,"LOW")==0)
        printf("Charge Battery Soon\n");
    else if(strcmp(status,"MEDIUM")==0)
        printf("Battery OK\n");
    else if(strcmp(status,"FULL")==0)
        printf("Battery Full\n");
    else
        printf("Invalid status!\n");
}
