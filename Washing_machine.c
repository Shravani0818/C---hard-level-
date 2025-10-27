#include <stdio.h>
#include <string.h>

int main() {
    char cycle[10];
    printf("Enter cycle (WASH/RINSE/SPIN): ");
    scanf("%s", cycle);

    if(strcmp(cycle, "WASH") == 0)
        printf("Washing clothes\n");
    else if(strcmp(cycle, "RINSE") == 0)
        printf("Rinsing clothes\n");
    else if(strcmp(cycle, "SPIN") == 0)
        printf("Spinning clothes\n");
    else
        printf("Invalid cycle \n");

    return 0;
}
