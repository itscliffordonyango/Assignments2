// Write a C program to read the name and marks of 5 students and store them in a file 
#include <stdio.h>
#include <stdlib.h>

int main(){
    char student_name[25];
    int marks;

    // now write the file and its pointer
    FILE *exercise1 = fopen("/home/chakeems/Desktop/fexercise.txt", "w"); // this will open and write to the file
    if (exercise1 == NULL){
        printf("FILE OPEN ERROR !!!");
        exit(1);
    }

    // now we get the user inputs using a loop (name and marks )

    for(int i=0; i<5; i++){
    printf("Enter your student %d's name : \n", i+1);
    scanf(" %[^\n]s",student_name);

    printf("What is student %d's average score : \n", i + 1);
    scanf("%d", &marks);

    // take the inputs and save them into our file 
    fprintf(exercise1,"Name :  %s\n", student_name);
    fprintf(exercise1,"Marks : %d\n\n",marks);
    }

    fclose(exercise1);
    printf("Data saved successfully to the file. \n");

    return 0;
}