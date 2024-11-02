#include <stdio.h>

int main() {
    int i, j, k;
    int marks[3][3][3] = {
        {
            {90, 80, 70},
            {85, 75, 65},
            {95, 85, 75}
        },
        {
            {88, 78, 68},
            {83, 73, 63},
            {93, 83, 73}
        },
        {
            {60,53,33},
            {55,45,35},
            {65,55,35},
        }
    };

    
    for (i = 0; i < 3; i++) {
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                printf("%d ", marks[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
