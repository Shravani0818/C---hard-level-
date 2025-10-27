#include <stdio.h>

int main()
{
    int grade;
    printf("Quality Control Grade\n");
    printf("1. Excellent\n2. Good\n3. Fair\n4. Poor\n");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("Grade: EXCELLENT\n");
        break;
    case 2:
        printf("Grade: GOOD\n");
        break;
    case 3:
        printf("Grade: FAIR\n");
        break;
    case 4:
        printf("Grade: POOR\n");
        break;
    default:
        printf("Invalid grade\n");
        break;
    }
    return 0;
}
