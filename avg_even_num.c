#include <stdio.h>
float avgEven(int a[], int n) {
    int sum=0, count=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==0) { sum+=a[i]; count++; }
    if(count==0) return 0;
    return (float)sum/count;
}
int main() {
    int a[6];
    printf("Enter 6 numbers: ");
    for(int i=0;i<6;i++) scanf("%d",&a[i]);
    printf("Average of even numbers = %.2f\n", avgEven(a,6));
    return 0;
}
