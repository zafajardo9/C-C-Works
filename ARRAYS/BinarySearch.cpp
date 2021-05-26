#include <iostream>

using namespace std;


int main() {


    return  0;
}

/*
    LINEAR
    int n, item_search, temp = 0;
    
    printf("How many Elements: \n");
    scanf("%d", &n);

    printf("Input Values: \n");

    int arr[n];
    //getting the user input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //printing the array
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    printf("Input value/item to be searched: \n");
    scanf("%d", &item_search);

    //Searching part
    printf("\t=Searching=\n");

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item_search)
        {
            printf("Item found inside the array\n");
            printf("Array Index Value is: %d \n", i); //variable i in for loop
            temp = 1;
        }
        
    }
    
    if(temp == 0) printf("The inputted values has not been found inside the Array");


    return 0;

*/


/*



void binarySearch(int arr[], int n, int search, int comparisons) {
    int first = 0;
    int last = length - 1;
    int mid = 0;
    bool found = false;
    comparisons = 0;


    while (first <= last && !found) {
        mid = (first + last) / 2;

        if (list[mid] == searchItem) {
            found = true;
            comparisons = comparisons + 1;
        }
        else if (list[mid] > searchItem) {
        last = mid -1;
        comparisons = comparisons + 2;
        }
        else {
        first = mid + 1;
        comparisons = comparisons + 2;
        }
    }

    if (found) {
        return mid;
    } else{
        return -1;
    }
}

*/


/*
    printf("What type of searching algorithm\n1\tLINEAR\n2\tBINARY");
    scanf("%d", &);
    
    // if(item_search == 1)
    //     binarySearch();
    // else
    //     linearSearch();

    item_search == 1 
        ? binarySearch(arr,n,item_search,comparisons) 
        : linearSearch();

*/