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

char BookID[30];
int duedate, duemonth , dueyear ;
int returndate , returnmonth , returnyear ;


int main (){

    printf("Welcome  to the School Online Library Management System (SOLMS)");
    // printf("Kindly enter the BookID of the borrowed material: \n");
    // // scanf("%s", &BookID);   --commented since it won't allow whitespaces. Using fgets instead which caters for the whitespaces
    // fgets(BookID,sizeof(BookID), stdin);




}
int inputs(){

// Take in the  book details from the user

    printf("Kindly enter the BookID of the borrowed material: \n");
    // scanf("%s", &BookID);   --commented since it won't allow whitespaces. Using fgets instead which caters for the whitespaces
    fgets(BookID,sizeof(BookID), stdin);


// Take in the borrowing details from the details

    printf("Enter due date on the stamp of the book you borrowed : \n")
    scanf("")


}