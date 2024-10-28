//
//  main.c
//  Number to Word
//
//  Created by Arnav on 28/10/24.
//

#include <stdio.h>

int main(void) {
    int digit;
    
    // Ask for user input
    printf("Enter a single-digit number (0-9): ");
    scanf("%d", &digit);
    
    // Check if input is within the range 0-9
    if (digit >= 0 && digit <= 9) {
        // Convert digit to word form using switch case
        switch(digit) {
            case 0: printf("Zero\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            case 6: printf("Six\n"); break;
            case 7: printf("Seven\n"); break;
            case 8: printf("Eight\n"); break;
            case 9: printf("Nine\n"); break;
        }
    } else {
        // If input is not valid
        printf("Invalid input\n");
    }
    
    return 0;
}
