#include <stdio.h>
#include <stdlib.h>

void linear(int arr[], int n, int item_search, int temp);
void sorter(int arr[], int n);
int binary(int arr[], int n, int item_search);

int main() {
    int n, i, item_search, temp = 0, user_pick;
    
    printf("How many Elements: \n");
    scanf("%d", &n);

    printf("Enter all the values/items: \n");

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

    //Making the user pick what type of search algo
    printf("What Search Algorithm to use? \n1. Linear\n2.Binary\n");
    printf("Input 1 or 2\n");
    scanf("%d", &user_pick);
    printf("\t=Searching=\n");
    if(user_pick == 1){
        linear(arr, n, item_search, temp);
    }
    else if(user_pick == 2){
        int index = binary(arr, n, item_search);
        //will check if the return value from the function is -1 or 0
        printf("Remember: Arrays in C are indexed starting at 0,\nas opposed to starting at 1 \n");
        printf("---------------------------------\n");
        if(index != -1) printf("Value/item to search: %d is at index %d", item_search, index);
        else printf("Value/item to search: %d is not found", item_search);
    }
    else{
        printf("Invalid input\n");
    } 
    return 0;
}

void linear(int arr[], int n, int item_search, int temp) {
    int i;
    for(i = 0; i < n; i++){
        if (arr[i] == item_search){
            printf("Remember: Arrays in C are indexed starting at 0,\nas opposed to starting at 1 \n");
            printf("---------------------------------\n");
            printf("Value/item to search: %d is at index %d \n", item_search, i); //variable i in for loop
            temp = 1;
        }
    }
    if(temp == 0) printf("Value/item to search: %d is not found", item_search);
}

void sorter(int arr[], int n) {
    //I picked selection sort cuz why not
    int position = 0;
    int temp = 0;
    int move;
    
    for(move = 0; move < n-1; move++){
        position = move;
        for (int i = move+1; i < n; i++){
            if ( arr[i] < arr[position]) {
                position = i;
            }
        }
        if(position != move){
            temp = arr[move];
            arr[move] = arr[position];
            arr[position] = temp;
        }
    }
}
int binary(int arr[], int n, int item_search) {
    int left = 0;//left
    int right = n - 1;
    int mid;
    sorter(arr, n);
    while (left <= right)
    {
        mid = (left + right)/2; //left + (left + right) / 2
        if(item_search == arr[mid]) return mid;
        else if(item_search < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}
