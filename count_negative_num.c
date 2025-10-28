#include <stdio.h>
int countNegative(int a[], int n) {
    int c=0;
    for(int i=0;i<n;i++) if(a[i]<0) c++;
    return c;
}
int main() {
    int a[5];
    printf("Enter 5 integers: ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    printf("Negative count = %d\n", countNegative(a,5));
    return 0;
}
