#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter the Number 1: ");
    scanf("%d", &A);

    printf("Enter the Number 2: ");
    scanf("%d", &B);

    printf("Enter the Number 3: ");
    scanf("%d", &C);

    int Largest = (A > B && A > C) ? A : (B > C ? B : C);

    printf("The Largest Number is %d", Largest);

    return 0;
}

