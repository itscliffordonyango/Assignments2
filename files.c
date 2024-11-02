#include <stdio.h>

int main(){
    int a , b=10;
    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);


    printf("The address of a is a is %p \n",&a);
    printf("The address of b is %p \n",&b);
}


/*specifier for pointers is  %p
// %p is used to print the memory address of a variable


ptr = fopen("path of file to be opened", "mode") ---> for opening the file 


modes in standard I/O :
        - r read file
        - rb read binary
        - w write file
        - wb write binary
        - a append file
        - ab append binary


fptintf(ptr, "%d", num); ---> this is fo writing to a file
fclose(ptr);  ---> for closing the file
*/


