#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
//I was thinking using bool for bhinarysearch
void sorter(int arr[], int n) {
    //I picked selection sort cuz why not
    int position = 0;
    int temp = 0;
    int move;
    
    for(move = 0; move < n-1; move++){
        
        position = move;
        
        for (int i = move+1; i < n; i++)
        {
            if ( arr[i] < arr[position]) {
                position = i;
            }
        }
        
        if(position != move)
        {
            temp = arr[move];
            arr[move] = arr[position];
            arr[position] = temp;
        }
    }

}
int binarySearch(int arr[], int n, int searchItem) {
    int left = 0;//left
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right)/2; //left + (left + right) / 2
        if(searchItem == arr[mid]) return mid;
        else if(searchItem < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {

    int n, searchItem;

    printf("How many Elements? \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter all the values/items \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);    
    }
    //passing to function sort
    sorter(arr, n);
    //Display the new sorted
    printf("New Sorted Array\n");
    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    //getting what will be the item/value to find
    printf("Enter an item/value to search \n");
    scanf("%d", &searchItem);
    //after getting all values
    //will go to sorting

    
    int index = binarySearch(arr, n, searchItem);
    //will check if the return value from the function is -1 or 0
    printf("Remember: Arrays in C are indexed starting at 0,\nas opposed to starting at 1 \n");
    printf("---------------------------------\n");
    if(index != -1) printf("Value/item to search: %d is at index %d", searchItem, index);
    else printf("Value/item to search: %d is not found", searchItem);

    return 0;
}