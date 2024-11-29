
#include <stdio.h>

#define MAX_GUESTS 100

typedef struct {
    char name[50];
    int nights;
    float rate_per_night;
    float total_bill;
} Guest;

int main() {
    int num_guests, i;
    float threshold;
    Guest guests[MAX_GUESTS];
    int highest_bill_index = 0;

    printf("Enter the number of guests: ");
    scanf("%d", &num_guests);

    for (i = 0; i < num_guests; i++) {
        printf("\nEnter details for guest %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", guests[i].name);
        printf("Number of nights: ");
        scanf("%d", &guests[i].nights);
        printf("Room rate per night: ");
        scanf("%f", &guests[i].rate_per_night);

        guests[i].total_bill = guests[i].nights * guests[i].rate_per_night;

        if (guests[i].total_bill > guests[highest_bill_index].total_bill) {
            highest_bill_index = i;
        }
    }

    printf("\nGuest Bills:\n");
    for (i = 0; i < num_guests; i++) {
        printf("Guest: %s, Nights: %d, Rate: %.2f, Total Bill: %.2f\n",
               guests[i].name, guests[i].nights, guests[i].rate_per_night, guests[i].total_bill);
    }

    printf("\nGuest with the highest bill:\n");
    printf("Guest: %s, Total Bill: %.2f\n", guests[highest_bill_index].name, guests[highest_bill_index].total_bill);

    printf("\nEnter the bill amount threshold: ");
    scanf("%f", &threshold);

    printf("\nGuests with bills over %.2f:\n", threshold);
    for (i = 0; i < num_guests; i++) {
        if (guests[i].total_bill > threshold) {
            printf("Guest: %s, Total Bill: %.2f\n", guests[i].name, guests[i].total_bill);
        }
    }

    return 0;
}


