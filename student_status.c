#include <stdio.h>

int main() {
    int status;
    printf("student Attendance Status\n");
    printf("1. Present\n2. Absent");
    printf("Enter attendance status: ");
    scanf("%d", &status);

    switch(status) {
        case 1: printf("student is PRESENT.\n"); break;
        case 2: printf("student is ABSENT.\n"); break;
        default: printf("Invalid status.\n"); break;
    }

    return 0;
}
