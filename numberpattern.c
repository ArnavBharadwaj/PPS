//
//  main.c
//  number pattern
//
//  Created by Arnav on 29/10/24.
//

#include <stdio.h>

int main() {
    int n;

    // Ask the user for the size
    printf("Enter the size (n): ");
    scanf("%d", &n);

    // Outer loop from i = 1 to i < n
    for (int i = 1; i < n; i++) {
        // Inner loop from j = 1 to j < i
        for (int j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("\n");  // New line after each iteration of the inner loop
    }

    return 0;
}
