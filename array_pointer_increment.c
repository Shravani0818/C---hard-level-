#include <stdio.h>

int main() {
    int num[5] = {5, 10, 15, 20, 25};
    int *ptr = num;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, *ptr);
        ptr++; // moving pointer to next element
    }

    return 0;
}
