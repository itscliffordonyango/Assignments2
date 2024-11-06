/*
Date : 5th November 2024
Author : Clifford Onyango


Write a c function to check if a number is even or not. If i=the given number is even the program should output ; "The number is even" else it should output "The number is odd".
*/

#include <stdio.h>
int number ;
int even (int number);
int odd(int number);

int main (){
    printf("Enter your test number : \n");
    scanf("%d",&number);

    even(number);
}

int even(int number){
     
     if (number % 2 == 0){
        printf("The number is even. \n");
     }
     else{
        odd(number);
        
     }
}

int odd(int number){
    printf("The number is odd. \n");
}