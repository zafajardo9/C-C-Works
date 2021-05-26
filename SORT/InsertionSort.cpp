#include <iostream>
using namespace std;

//cpp sorting
//insertion sort

void insertionSort(int arr[], int n);

int main() {

    const int n = 10;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }
    
    insertionSort(arr, n);

        cout << "Sorted Array" << endl;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    

    return  0;
}

void insertionSort(int arr[], int n) {
    int i, j, key;

    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = key;
        
    }
    
}
