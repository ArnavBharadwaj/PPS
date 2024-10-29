//
//  main.c
//  monthtoseason
//
//  Created by Arnav on 29/10/24.
//
#include <stdio.h>

int main(void) {
    int month;
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month == 12 || month == 1 || month == 2) {
        printf("Winter\n");
    } else if (month == 3 || month == 4 || month == 5) {
        printf("Spring\n");
    } else if (month == 6 || month == 7 || month == 8) {
        printf("Summer\n");
    } else if (month == 9 || month == 10 || month == 11) {
        printf("Autumn\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
