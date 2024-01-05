#include <stdio.h>

// Function to swap two numbers using pass by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function:\n");
    printf("a = %d, b = %d\n", a, b);
}

// Function to swap two numbers using pass by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function:\n");
    printf("a = %d, b = %d\n", *a, *b);
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping:\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    // Calling swapByValue function
    swapByValue(num1, num2);

    // Displaying values after swapByValue function call
    printf("After swapByValue function:\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    // Calling swapByReference function
    swapByReference(&num1, &num2);

    // Displaying values after swapByReference function call
    printf("After swapByReference function:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

