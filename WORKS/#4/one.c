#include <stdio.h>
#include <conio.h>


int GCD(int x, int y);

int main() {

    int x, y, result;
    printf("Enter Two number to find the Greates Common Divisor\n");
    printf("1:");
    scanf("%d", &x);
    printf("2:");
    scanf("%d", &y);

    result = GCD(x, y);

    printf("The GCD of the two number is:\n");
    printf("%d", result);

    return  0;
}

int GCD(int x, int y) {
    if(y == 0)
        return x;
    else
        return GCD(y, x % y);
}   