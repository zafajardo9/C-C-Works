#include <stdio.h>
#include <conio.h>


int sorter(int n, int array[]);


int main() {
    int array[] = {5, 1, 6};

    
    for (int i = 0; i < 3; i++)
    {   
        int tmp;
        if (array[i] > array[i+1]){  
            tmp = array[i];  
            array[i] = array[i+1];  
            array[i+1] = tmp;  
        }  
        printf("%d \n", array[i]);
    }
    
    //sorter(1, array);



    
    return  0;
}

int sorter(int n, int array[]) {

    if(n < 3) {
        return array[0];
    }else {

        int tmp = 0; 
        if (array[n] < array[n-1]){  
            tmp = array[n];  
            array[n] = array[n-1];  
            array[n-1] = tmp;  
        }  
        printf("%d \n", array[n]);
        n++;
        sorter(n, array);

    }

}