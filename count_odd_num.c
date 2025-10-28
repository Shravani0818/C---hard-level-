#include <stdio.h>
int countOdd(int a[], int n) {
    int c = 0;
    for(int i = 0; i < n; i++)
        if(a[i] % 2 != 0) c++;
    return c;
}
int main() {
    int a[5], i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Odd count = %d\n", countOdd(a, 5));
    return 0;
}
