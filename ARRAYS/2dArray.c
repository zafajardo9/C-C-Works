#include <stdio.h>
#include <conio.h>

int main() {


    int arr[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };

    int i,j;

        for(i = 0; i < 5; i++) {
            for(j = 0; j < 5; j++) {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}