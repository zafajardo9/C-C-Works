#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char word[30];
    char word_reverse[30];
    int count = 0, end, begin;
    int length = strlen(word); 
    printf("Enter a Word\n");

    gets(word);
    printf("String is : %s \n", word);

    //reversing 
    while(word[count] != '\0')
        count++;
    end = count - 1;
    for (begin = 0; begin < count; begin++) {
        word_reverse[begin] = word[end];
        end--;
    }
    word_reverse[begin] = '\0';
    printf("THE REVERSE: %s\n", word_reverse);

    //PALINDROME PART

    int palindrome = 0;//bool plsss, meaning TRUE
    //Palindrome part
    for (int i = 0; i < length; i++){
        if(word[0] == word_reverse[length-i-1]) {
            palindrome = 1;
        }else palindrome = 0;
    }
    //checking the palindrome variable 
    if(palindrome == 1) printf("%s is a Palindrome", word);
    else printf("%s is NOT a Palindrome", word);




    return 0;
}