
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    int max;
    
    printf("Enter element 1: ");
    scanf("%d", &max);

    for (i = 2; i <= n; i++) {
        int num;
        printf("Enter element %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("The maximum of the entered numbers is: %d\n", max);

    return 0;
}

