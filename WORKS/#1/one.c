#include <stdio.h>


int main() {
    //5 x 5 array
    int arr[5][5];
    printf("Enter Values to store in 5 x 5 array\n");
    int i, j;
    //Getting the uer input
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //Printing the array in a 5x5 form or display
    printf("Printings 5 x 5 array\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    //Sum of Each Column and Row 
    //A and B
    //my first code is rowSum[5]; and it did not work
    //this array have 0 at first and will overwritten by different values
    //putting = {0};
    int rowSum[5] = {0}; 
    int colSum[5] = {0};

    printf("\nSum of all column \n");//using 1D array
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++)
        {
            //putting them to a 1D arrray
            colSum[i] = colSum[i] + arr[j][i];
            rowSum[i] = rowSum[i] + arr[i][j];
        }
    }
    //A and B Printing 
    
    printf("A and B problem\n ");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            //This part will display the 5x5 array
            printf("\t%d\t", arr[i][j]);
        }
        //This will display the sum in row
        printf("|Sum of each row = %d\n", rowSum[i]);
    }
    printf("Sum of each columns\n");
    for (i = 0; i < 5; i++)
    {
        //This will print sum in column
        printf("\t%d\t", colSum[i]);
    }


    //other way
    int checker = 0;
    int checkerTwo = 0;
    //C and D
    //here, checking if all summed up row and columns have same values
    for (int i = 0; i < 5; i++){
        
        // if(colSum[i] == colSum[i+1]) printf("\nColumn values are equal");
        // else printf("\nColumn values are not equal");

        // if(rowSum[i] == rowSum[i+1]) printf("\nRow values are equal");
        // else printf("\nRow values are not equal");

        //other way
        if(colSum[i] == colSum[i+1]) checker = 1;

        if(rowSum[i] == rowSum[i+1]) checkerTwo = 1;
    }

    if(checker == 1) printf("\nColumn values are equal");
    else printf("\nColumn values are not equal");


    if(checkerTwo == 1) printf("\nRow values are equal");
    else printf("\nRow values are not equal");

    return 0;
}