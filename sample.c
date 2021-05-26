#include <stdio.h>
#include <conio.h>

int main() {
    
    int x[3][3];
    int i,j;


    for (i=0; i<3; i++)
    for (j=0; j<3; j++)
    { printf("Enter an integer value: ");
    scanf("%d", &x[i][j]); // input numbers are entered row-wise
    }
    printf("\nThe array values are\n\n");
    // Printing the array values
    for (i=0; i<3; i++)
    { for (j=0; j<3; j++)
    printf("%5d", x[i][j]);
    printf("\n");
    }

    return 0;


}