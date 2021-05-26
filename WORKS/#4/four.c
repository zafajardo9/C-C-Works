#include <stdio.h>
#include <conio.h>


int powerFunction(int number, int power);

//x^y

int main() {

    int number, power, result;

    printf("Enter a number\n");
    scanf("%d", &number);

    printf("Enter the value of the power\n");
    scanf("%d", &power);

    result = powerFunction(number, power);
    printf("%d^%d = %d", number, power, result);


    return  0;
}

int powerFunction(int number, int power) {
    if(power != 0)
        return (number * powerFunction(number, power-1));
    else
        return 1;
}