#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //int or float
    int i;
    printf("Power\t\tResult \n");
    for(i = 0;i <= 10; i++) {
        int output = pow(2, i);
        printf("%d\t\t\t%d\n",i, output);
    }


    return 0;
}