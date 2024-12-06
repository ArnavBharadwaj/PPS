#include <stdio.h>

// Function to check if chocolates can be equally distributed
int canDistributeEqually(int aliceChocolates, int bobChocolates) {
    int totalChocolates = aliceChocolates + bobChocolates;
    // If the total number of chocolates is even, they can be distributed equally
    return (totalChocolates % 2 == 0);
}

int main() {
    int aliceChocolates, bobChocolates;

    // Input number of chocolates Alice and Bob have
    printf("Enter the number of chocolates Alice has: ");
    scanf("%d", &aliceChocolates);

    printf("Enter the number of chocolates Bob has: ");
    scanf("%d", &bobChocolates);

    // Check and display if they can distribute equally
    if (canDistributeEqually(aliceChocolates, bobChocolates)) {
        printf("Yes, Alice and Bob can distribute the chocolates equally.\n");
    } else {
        printf("No, Alice and Bob cannot distribute the chocolates equally.\n");
    }

    return 0;
}
