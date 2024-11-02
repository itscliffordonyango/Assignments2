/*
    DAYS OVERDUE                CHARGES PER DAY
    Upto 7 days                  Ksh. 20 
    8 to 14 days                 Ksh. 50
    15 days or more              Ksh. 100


    Required varriables :
                        1) BookID
                        2) Duedate
                        3) returndate

    FUnctions 
            - Overdue days
            - Fine calculations
            - printing user inputs and the  outout    

*/

#include <stdio.h>

// Function declarations
int inputs();
int calculate_overdue_days();
void calculate_fine();

// Global variables
char BookID[30];
int charges, overdues;
int duedate, duemonth, dueyear;
int returndate, returnmonth, returnyear;

int main() {
    printf("Welcome to the School Online Library Management System (SOLMS)\n");

    // Take inputs from the user
    inputs();

    // Calculate overdue days
    calculate_overdue_days();

    // Calculate fine based on overdue days
    calculate_fine();

    return 0;
}

// Function to take inputs
int inputs() {
    // Take BookID
    printf("Kindly enter the BookID of the borrowed material: \n");
    fgets(BookID, sizeof(BookID), stdin);

    // Take due date
    printf("Enter the due date (dd/mm/yyyy): \n");
    scanf("%d %d %d", &duedate, &duemonth, &dueyear);

    // Take return date
    printf("Enter the return date (dd/mm/yyyy): \n");
    scanf("%d %d %d", &returndate, &returnmonth, &returnyear);

    // Print the input data
    printf("The book %s was due on %d/%d/%d and returned on %d/%d/%d.\n",
           BookID, duedate, duemonth, dueyear, returndate, returnmonth, returnyear);

    return 0;
}

// Function to calculate overdue days
int calculate_overdue_days() {
    // Basic logic to calculate overdue days (assuming dates within the same month and year)
    overdues = (returndate - duedate) + (returnmonth - duemonth) * 30 + (returnyear - dueyear) * 365;

    if (overdues < 0) {
        overdues = 0; // If returned early or on time
    }

    printf("Your overdue days amount to a total of %d days.\n", overdues);
    return overdues;
}

// Function to calculate fine based on overdue days
void calculate_fine() {
    if (overdues > 0 && overdues <= 7) {
        charges = overdues * 20;
    } else if (overdues >= 8 && overdues <= 14) {
        charges = overdues * 50;
    } else if (overdues >= 15) {
        charges = overdues * 100;
    } else {
        charges = 0;
    }

    if (charges > 0) {
        printf("Your fine amounts to a total of Ksh. %d.\n", charges);
    } else {
        printf("You have no fines.\n");
    }
}
