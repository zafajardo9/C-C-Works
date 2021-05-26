#include <stdio.h>
#include <conio.h>


int sorter(int a, int b, int c);


int main() {

    int a, b, c;
    printf("Enter 3 integers \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sorter(a, b, c);


    return  0;
}

int sorter(int a, int b, int c) {
        
    int temp;
        
    if (a > b) {  temp = a; a = b; b = temp; }
    if (a > c) {  temp = a; a = c; c = temp; }
    if (b > c) {  temp = b; b = c; c = temp; }

    printf("%d, %d, %d", a , b, c);
}
