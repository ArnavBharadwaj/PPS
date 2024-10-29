//
//  main.c
//  star pattern
//
//  Created by Arnav on 29/10/24.
//

#include <stdio.h>

int main(void) {
    int length, breadth;

    // Ask the user for the length and breadth
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);

    // Outer loop for rows
    for (int i = 1; i <= length; i++) {
        // Inner loop for columns
        for (int j = 1; j <= breadth; j++) {
            // Check if we're on the border of the rectangle
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // New line after each row
    }

    return 0;
}
