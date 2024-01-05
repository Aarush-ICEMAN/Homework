#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    
    // Initialize pointers for the beginning and end of the string
    int start = 0;
    int end = len - 1;

    // Check characters from both ends towards the center
    while (start < end) {
        // Ignore non-alphanumeric characters
        while (!isalnum(str[start]) && start < end) {
            start++;
        }
        while (!isalnum(str[end]) && start < end) {
            end--;
        }

        // Compare the characters (case insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }

        // Move pointers towards the center
        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char input[100];

    // Get user input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from input
    input[strcspn(input, "\n")] = 0;

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

