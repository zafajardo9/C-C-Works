#include <iostream>

using namespace std;
   

void bubbleSort(int arr[], int n);

int main() {

    const int n = 5;
    int arr[n];
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Number :" << endl;
        cin >> arr[i];
    }

    cout << "Bubble Sort" << endl;

    bubbleSort(arr, n);

    return  0;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    //Method
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    //Printing
    for ( i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    
}