#include <stdio.h>
int findMax(int a[], int n) {
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}
int main() {
    int a[5], i;
    printf("Enter 5 numbers: ");
    for(i = 0; i < 5; i++) scanf("%d", &a[i]);
    printf("Maximum = %d\n", findMax(a, 5));
    return 0;
}
