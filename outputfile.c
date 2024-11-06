/*
Date : 5th November 2024
Author : Clifford Onyango

you are to develop a c program to perform basic text file operations. the program should implement the following tasks :
i)
    write a function that prompts the user to enter a paragraph (upto 200 characters) and writes it to a file named outut.txt

ii)
    write a function that reads the content from the output.txt file and displays it on the screen.

iii)
    modify the program to append an additional paragraph to the output.txt file without deleting the original content 

iv) 
    ensure the program handles errors efficiently when opening , reading or writing to the file 
*/

#include <stdio.h>
#include <stdlib.h>

char paragraph [200];
int choice;
int writing (char paragraph [200]);
int reading(char paragraph [200]);
int appending(char paragraph [200]);

int main(){

// give the user options to chose from 
while(1){
printf("Chose a function to perform : \n \n");
printf("1. Write a new paragraph \n");
printf("2. Read existing paragraphs \n");
printf("3. Update your previous paragraph \n");
printf("4. Exit program \n");
scanf("%d",&choice);


    switch(choice){
        case 1:
            writing(paragraph);
            break;
        case 2 :
            reading(paragraph);
            break;
        case 3 :
            appending(paragraph);
            break;
        case 4 :
            printf("Please wait as we exit the program \n");
            exit(0);
        default :
            printf("Invalid choice!!!! Please enter either of choices provided. \n");
    }

}

}

// write the file 

int writing(char paragraph [200]){
    FILE *output = fopen("/home/chakeems/Documents/Programming Unit/test exercises/output.txt", "w");
    if (output == NULL){
        printf("Error creating the file! Please try again");
        exit(1);
    }

// prompt the user to enter the paragraph 
    printf("Enter a paragraph (upto 200 characters) : ");
    scanf(" %[^\n]s",paragraph);

// save everything entered to the file 
    fprintf(output,"%s",paragraph);
    fclose(output);

    printf("Saved successfully.");

    return 0 ;

}

int appending (char paragraph [200]){
        FILE *output = fopen("/home/chakeems/Documents/Programming Unit/test exercises/output.txt", "a");
    if (output == NULL){
        printf("Error writing to file! Please try again");
        exit(1);
    }

// prompt the user to enter the paragraph 
    printf("Enter a paragraph (upto 200 characters) : ");
    scanf(" %[^\n]s",paragraph);

// save everything entered to the file 
    fprintf(output,"%s",paragraph);
    fclose(output);

    printf("Saved successfully.");

    return 0 ;

}

int reading(char paragraph[200]){
    FILE *output = fopen("/home/chakeems/Documents/Programming Unit/test exercises/output.txt","r");
    if (output == NULL){
        printf("Error opening the file !!!");
        exit(1);
    }
    
    // fscanf(output,"%s",paragraph);
    // Read the file
    if (fscanf(output, "%[^\n]", paragraph) != 1) {
        printf("Error reading from the file !!!\n");
        fclose(output);
        exit(1);
    }

    fclose(output);

    printf("\n %s\n", paragraph);

    return 0 ;    
}

/*

int reading(char paragraph[200]){
    FILE *output = fopen("/home/chakeems/Documents/Programming Unit/test exercises/output.txt","r");
    if (output == NULL){
        printf("Error opening the file !!!\n");
        exit(1);
    }

    // Read the file
    if (fscanf(output, "%[^\n]", paragraph) != 1) {
        printf("Error reading from the file !!!\n");
        fclose(output);
        exit(1);
    }

    fclose(output);

    // Display the content read from the file
    printf("Content of the file: %s\n", paragraph);

    return 0;    
}

*/