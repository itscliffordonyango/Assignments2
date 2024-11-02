// writting to a file
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num ;
    FILE *ftpr; //declare a pointer
    ftpr = fopen("/home/chakeems/Documents/Programming Unit/Structured Programming/C Programming/files/myfiles.txt","w"); //open the file


    // ftpr = fopen("/home/chakeems/Documents/Programming Unit/Structured Programming/C Programming/files/myfiles.txt","a"); append the file

    if (ftpr==NULL){
        printf("Error opening file");
        exit(1);
    }
    
    printf("Enter your prefered number : ");
    scanf("%d",&num);

    fprintf(ftpr,"The prefered number is  : %d\n",num); //write to the file
    fclose(ftpr);

    printf("Opreation successfull");

    return 0 ;
}