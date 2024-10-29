//
//  main.c
//  student data
//
//  Created by Arnav on 29/10/24.
//

#include <stdio.h>

int main(void) {
    int students, subjects;

    // Input number of students and subjects
    printf("Enter the number of students: ");
    scanf("%d", &students);

    printf("Enter the number of subjects: ");
    scanf("%d", &subjects);

    // Declare a 2D array to store the marks
    int marks[students][subjects];

    // Input marks for each student in each subject
    for (int i = 0; i < students; i++) {
        printf("Enter marks for Student %d:\n", i + 1);
        for (int j = 0; j < subjects; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Initialize arrays to hold total and average marks for each subject
    int total_marks[subjects];
    float average_marks[subjects];
    int highest_total = 0;

    // Calculate total marks for each subject
    for (int i = 0; i < subjects; i++) {
        total_marks[i] = 0;
        for (int j = 0; j < students; j++) {
            total_marks[i] += marks[j][i];
        }
        average_marks[i] = total_marks[i] / (float)students;
    }

    // Calculate the highest total marks obtained by any student
    for (int i = 0; i < students; i++) {
        int student_total = 0;
        for (int j = 0; j < subjects; j++) {
            student_total += marks[i][j];
        }
        if (student_total > highest_total) {
            highest_total = student_total;
        }
    }

    // Display the results
    printf("\nTotal marks for each subject:\n");
    for (int i = 0; i < subjects; i++) {
        printf("Subject %d: %d\n", i + 1, total_marks[i]);
    }

    printf("\nAverage marks for each subject:\n");
    for (int i = 0; i < subjects; i++) {
        printf("Subject %d: %.2f\n", i + 1, average_marks[i]);
    }

    printf("\nHighest total marks obtained by any student: %d\n", highest_total);

    return 0;
}

