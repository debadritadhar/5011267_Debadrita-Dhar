#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 8;
    int *arr = (int *)malloc(num * sizeof(int)); // allocate 8 ints

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values using pointer arithmetic
    for (int i = 0; i < num; i++) {
        *(arr + i) = i * 10; // equivalent to arr[i]
    }

    // Print values
    for (int i = 0; i < num; i++) {
        printf("Element %d = %d\n", i, *(arr + i));
    }

    free(arr);
    return 0;
}