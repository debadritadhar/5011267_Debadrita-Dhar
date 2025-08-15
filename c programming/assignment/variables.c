#include <stdio.h>
int main() {
    int a = 20;
    float b = 2.2;
    float result = a + b;  // implicit conversion
    int c = (int)b;        // explicit type casting
    printf("Result: %.2f, Casted value: %d\n", result, c);
    return 0;
}