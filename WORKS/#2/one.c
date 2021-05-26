#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
A palindrome is a word, phrase, number, 
or other sequence of characters which 
reads the same backward or forward. 
Allowances may be made for adjustments 
to capital letters, punctuation, and word dividers. 
Famous examples include "A man, a plan, a canal, Panama!", 
"Amor, Roma", "race car", "taco cat", 
and "No 'x' in Nixon".

*/
//'C' also allows us to initialize a 
//string variable without defining the 
//size of the character array.
//note: char word[] 1D = 1 word
//char word[][] = sentence na kumbaga

int main() {

    char word[30];// variable for user input
    char word_reverse[30];
    int count = 0, end, begin;// variables for this method
    //int length = sizeof(word); // kukunin ang size ng word variable talaga which is 30
    int length = strlen(word); // kukunin ang input mismo
    printf("Enter a Word\n");
    //scanf("%s", word); //scanf will automaticaally stop sa whitespace or backspace
    //fgets(word, length, stdin);//best way to get input na may space
    gets(word);
    printf("String is : %s \n", word);


    printf("THE REVERSE: %s\n", strrev(word));// simple way to print reverse

    int palindrome = 0;//bool plsss, meaning TRUE
    //Palindrome part
    for (int i = 0; i < length; i++){
        if(word[0] == strrev(word)[length-i-1]) {
            palindrome = 1;
        }else palindrome = 0;
    }
    //checking the palindrome variable 
    if(palindrome == 1) printf("%s is a Palindrome", word);
    else printf("%s is NOT a Palindrome", word);




    return 0;
}