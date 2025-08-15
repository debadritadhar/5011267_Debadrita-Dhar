#include <stdio.h>
int main() {
    int arr[3] = {100, 200, 300, 400};
    int *ptr = arr;

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    ptr++;

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr); 
    ptr++;

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr); 
    ptr++;

    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);  

    return 0;
}