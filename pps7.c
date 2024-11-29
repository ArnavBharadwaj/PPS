#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to reverse a string (since strrev is non-standard)
void strrev_custom(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

// Function to extract IDs from quotes
void extractIDs(const char *quotes) {
    char buffer[1000];
    strcpy(buffer, quotes);
    char *token = strtok(buffer, ",");
    printf("\nExtracted IDs:\n");
    while (token != NULL) {
        int id = atoi(token);
        printf("%d\n", id);
        token = strtok(NULL, ",");
    }
}

// Function to check for duplicate product descriptions
void checkDuplicates(char quotes[][100], int n) {
    printf("\nChecking for duplicate descriptions:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(quotes[i], quotes[j]) == 0) {
                printf("Duplicate found: %s\n", quotes[i]);
            }
        }
    }
}

// Function to join all quotes into a single string
void joinQuotes(char quotes[][100], int n, char *result) {
    strcpy(result, "");
    for (int i = 0; i < n; i++) {
        strcat(result, quotes[i]);
        if (i < n - 1) strcat(result, ", ");
    }
}

// Function to find specific keywords in quotes
void findKeyword(char quotes[][100], int n, const char *keyword) {
    printf("\nSearching for keyword '%s':\n", keyword);
    for (int i = 0; i < n; i++) {
        if (strstr(quotes[i], keyword) != NULL) {
            printf("Keyword found in: %s\n", quotes[i]);
        }
    }
}

// Function to check if a string is a palindrome
void checkPalindrome(char *quote) {
    char reversed[100];
    strcpy(reversed, quote);
    strrev_custom(reversed);
    if (strcmp(quote, reversed) == 0) {
        printf("Palindrome: %s\n", quote);
    } else {
        printf("Not a palindrome: %s\n", quote);
    }
}

int main() {
    int n;
    printf("Enter the number of quotes: ");
    scanf("%d", &n);
    getchar(); // To consume the newline character left by scanf

    char quotes[n][100];
    printf("Enter the quotes (ID followed by description):\n");
    for (int i = 0; i < n; i++) {
        fgets(quotes[i], sizeof(quotes[i]), stdin);
        quotes[i][strcspn(quotes[i], "\n")] = 0; // Remove trailing newline
    }

    char keyword[50];
    printf("\nEnter a keyword to search: ");
    fgets(keyword, sizeof(keyword), stdin);
    keyword[strcspn(keyword, "\n")] = 0; // Remove trailing newline

    // Task 1: Extract IDs
    char quotesString[1000] = "";
    for (int i = 0; i < n; i++) {
        strcat(quotesString, quotes[i]);
        if (i < n - 1) strcat(quotesString, ", ");
    }
    extractIDs(quotesString);

    // Task 2: Check for duplicate descriptions
    checkDuplicates(quotes, n);

    // Task 3: Join all quotes into one string
    char joinedQuotes[1000];
    joinQuotes(quotes, n, joinedQuotes);
    printf("\nJoined Quotes: %s\n", joinedQuotes);

    // Task 4: Find specific keywords
    findKeyword(quotes, n, keyword);

    // Task 5: Check if quotes are palindromes
    printf("\nChecking for palindrome quotes:\n");
    for (int i = 0; i < n; i++) {
        checkPalindrome(quotes[i]);
    }

    return 0;
}
