/* 
i) 
    Array data structures -
                             These are data structures that can store multiples elements of the same data type.

ii)Declare and initialize a 2D array named scores with 2 ows and 2 columns using the following values {65   92
 84   72} 
{35 70
59 67}

iii) Print the elements of the above array using a nested for loop

*/

#include <stdio.h>

int main() {
    int a, b; // first we declare loop variables

    // i) Declare and initialize a 2D array named scores with 4 rows and 2 columns
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    // iii) Print the elements of the above array using a nested for loop
    printf("Scores Array:\n");
    for (a = 0; a < 4; a++) {          //  4 for the number of rows
        for (b = 0; b < 2; b++) {       //  2 for the number of columns
            printf("%d ", scores[a][b]);
        }
        printf("\n"); 
    }

    return 0;
}
