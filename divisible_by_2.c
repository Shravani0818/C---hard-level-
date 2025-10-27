#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Divisible by 2");
    else
        printf("Not divisible by 2");
    return 0;
}
