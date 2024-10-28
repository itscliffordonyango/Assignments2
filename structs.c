#include <stdio.h>
#include <string.h>
struct Student{
    char student_name[30];
    int student_age ;
    char student_admn [16];
    int student_year ;
    char student_course [20] ;
    };
int main(){

    struct Student Student1,Student2;

    strcpy(Student1.student_name ,"Clifford");
    strcpy(Student1.student_admn,"BCS-05/0066/2024");
    strcpy(Student1.student_course,"Computer Science");
    Student1.student_age = 20;
    Student1.student_year = 2024;

    printf("Name : %s  \n", Student1.student_name);
    printf("Admn No : %s \n", Student1.student_admn);
    printf("Course : %s \n", Student1.student_course);
    printf("Year of admission : %d \n",Student1.student_year);
    printf("Age : %d \n",Student1.student_age);
    

}
