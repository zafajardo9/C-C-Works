#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
//I was thinking using bool for bhinarysearch

int main() {

        //LINEAR
    int n, i, item_search, temp = 0;
    
    printf("How many Elements: \n");
    scanf("%d", &n);

    printf("Enter all the values/items: \n");

    /*
        The problem in here is that I declare "arr[n]"
        where n is the input of the user
        this is not good in some compilers
        array length should have a constant value that is 
        computable at compile time
    */
    int arr[n];
    //getting the user input
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    //printing the array
    for (i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    
    printf("Input value/item to be searched: \n");
    scanf("%d", &item_search);

    //Searching part
    printf("\t=Searching=\n");

    for(i = 0; i < n; i++){
        if (arr[i] == item_search){
            printf("Remember: Arrays in C are indexed starting at 0,\nas opposed to starting at 1 \n");
            printf("---------------------------------\n");
            printf("Item found inside the array\n");
            printf("Value/item to search: %d is at index %d \n", item_search, i); //variable i in for loop
            temp = 1;
        }
        
    }
    
    if(temp == 0) printf("Value/item to search: %d is not found", item_search);

    return 0;
}