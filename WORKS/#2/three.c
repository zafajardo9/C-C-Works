#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX 30

int main()
{
    char userName[MAX];
    char userCheck[MAX];

    char pwd[MAX];
    char pwdCheck[MAX];
    int i;
    int counter = 0;
    int match;

   
    printf("\t============================\n");
    printf("\t=  Welcome to the System!  =\n");
    printf("\t===\t=LOGIN=\t\t ===\n");
    printf("\t============================\n");

	//USER DETAIL
	printf("Enter or create your username and password\n");
	printf("ENTER USERNAME: \t");
	gets(userName);
	printf("ENTER PASSWORD: \t");
	gets(pwd);


	system("cls");
    while(strcmp(pwd, pwdCheck)!=0 || strcmp(userName, userCheck)!=0){
		printf("\nAttempts left: %d\n", 3-counter);
        printf("\nEnter your Username:\t");
        gets(userCheck);

        printf("\nEnter your password:\t");

            for(i=0; i < strlen(pwd); i++){
                        pwdCheck[i] = getch();
						//if(pwdCheck[i] == 13){break;} // fail :<
                        printf("*");
            }
	
        
	
        counter++;
		system("cls");
        if(strcmp(pwd, pwdCheck)!=0 || strcmp(userName, userCheck)!=0){
            printf("\nIncorrect Password or Username. \n");
        }
        if(counter == 3){
        	system("cls");
            printf("\nIntruder Alert!\n");
            match = 1;
            break;
        }
    }
    if(match != 1){
    	printf("\n\tPROCESSING\n");
		sleep(2);
    	system("cls");
        printf("\n\nWelcome to PUP Quezon City!\n");
    }


    getch();
    return 0;
}


