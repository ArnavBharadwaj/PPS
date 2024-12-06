#include <stdio.h>

// Function to calculate the length of a string using pointers
int calculateLength(char *str) {
    int length = 0;

    // Traverse the string using pointer until the null character is encountered
    while (*(str + length) != '\0') {
        length++;
    }

    return length;
}

int main() {
    char input[100]; // Declare a character array to store the input string
    char *ptr = input; // Pointer to the input string

    // Prompt Selvan to input the string
    printf("Enter the string: ");
    scanf("%[^\n]s", input); // Read the string (supports spaces)

    // Call the function to calculate the length and store the result
    int length = calculateLength(ptr);

    // Print the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}
