#include <stdio.h>
#include <conio.h>


void exchange(int array[3][3], int length);

int main() {

    int array[3][3];
    int length = 3;//sizeof(array)/sizeof(int);
    printf("Input 9 elements for 3x3 array\n");

    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Original array values\n");
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
     exchange(array, length);

    return  0;
}

void exchange(int array[3][3], int length) {

    printf("Changed array values\n");
    for (int i = 0; i < length; i++){
        for (int j = 0; j < length; j++){
            printf("%d \t", array[j][i]);
        }
        printf("\n");
    }
}

