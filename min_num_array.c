#include <stdio.h>
int findMin(int a[], int n) {
    int min = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < min) min = a[i];
    return min;
}
int main() {
    int a[5], i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Minimum = %d\n", findMin(a, 5));
    return 0;
}
