#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char myString[50] = "Palindrom";
    printf("Enter the string");

    // String length
    printf("Length of the String: %lu\n", strlen(myString));

    // String concatenation
    strcat(myString, " Sentences");
    printf("Concatenated String: %s\n", myString);

    
    // String copying
    
    return 0;
}

