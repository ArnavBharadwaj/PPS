//
//  main.c
//  agectgry
//
//  Created by Arnav on 29/10/24.
//

#include <stdio.h>

int main(void) {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Determine the age category
    if (age >= 0 && age <= 12) {
        printf("You are a Child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a Teen.\n");
    } else if (age >= 20 && age <= 64) {
        printf("You are an Adult.\n");
    } else if (age >= 65) {
        printf("You are a Senior.\n");
    } else {
        // For negative ages or other invalid input
        printf("Invalid age entered.\n");
    }

    return 0;
}
