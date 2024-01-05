#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    printf("Fibonacci sequence for %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}

