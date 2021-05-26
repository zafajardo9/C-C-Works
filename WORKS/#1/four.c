#include <stdio.h>

int main() {
    //array made
    //int arr[] = {1,2,1,4,5,5,6,8,11,10,9,5}; int length = sizeof(arr)/sizeof(arr[0]);
    int length;
    int i, j;
    int n_search;
    int occurences = 0; //for knowing the occurences
    //user Input
    printf("How many elements :\n");
    scanf("%d", &length);
    
    int arr[length];
    printf("Input all elements :\n");
    for (i = 0; i < length; i++){
        scanf("%d", &arr[i]);
    }

    printf("List contains :\n");
    for (i = 0; i < length; i++)
    {
        printf("%d\n", arr[i]);
    }
    //getting the number that will be searched
    printf("Number to be searched is :\n");
    scanf("%d", &n_search);


    for (j = 0; j < length; j++){
        if(arr[j] == n_search){
            //comment the line of code below if you dont want to display it
            printf("Value %d, is found!\n", n_search);
            occurences++;//incrementing this variable if conditions are satisfied
        } 
    }

    printf("There are %d occurrences of the number %d", occurences, n_search);



    return 0;
}