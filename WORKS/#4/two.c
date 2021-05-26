#include <stdio.h>
#include <conio.h>

int primeNumber(int i, int x);


int main() {

    int x;

    while(x >= 1) {
        printf("Enter a number\n");
        scanf("%d", &x);

        if (x == 0) {printf("END OF PROGRAM");break;}

        if(primeNumber(2, x) == 1) {
            printf("Number: %d is a PRIME NUMBER\n", x);
        }else {
            printf("Number: %d is a NOT PRIME (COMPOSITE) NUMBER\n", x);
        }
    }
  
    return  0;
}

int primeNumber(int i, int x) {
    if(x <= 2 ){
        if(x == 2) {
            return 1;
        }else{
            return 0;
        }
    }
    if(x % i == 0)
        return 0;
    if(i * i > x)
        return 1;


    return primeNumber(x, i+1);
}