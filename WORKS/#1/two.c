#include <stdio.h>
#include <stdlib.h>

//program that will get an input to a 5x5array form
//all negative numbers will be zero
int main() {
    
    int n = 5;
    int arr[n][n];
    int how_many = 0;//added feat

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    //Printing the inputted arrays
    //display it in a 5x5 form
    //converting all negative to zero

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] <= 0)
            {
                arr[i][j] = 0;
                how_many++;//increment variable
            }
            printf("%d\t", arr[i][j]);
        }
        printf("\n");// to make it in a 5x5 form
    }
    
    // displaying how many negative values was converted to zero
    printf("How many negative values was changed: %d", how_many);
    

    return 0;
}