#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nYou chose Admin.\n");
                choice1();
                break;
            case 2:
                printf("\nYou chose Student.\n");
                choice2();
                break;
            case 3:
                printf("\nYou chose Teacher.\n");
                choice3();
                break;
            case 0:
                printf("\nExiting the Program...\n");
                choice0();
                break;
            default:
                printf("\nError!! Please try again.\n");
        }
        printf("\n");
    }
	while (choice != 0);
    return 0;
}
void choice1(){
	int passWord = 12345678;
	int testPass;
	printf("You chose Admin.\n");
	pritnf("\t--------LOGIN--------\n");
	printf("\t=======================\n");
	printf("Email: testemail@gmail.com");
	pritnf("Enter password: \n");
	if(passWord = testPass){
		printf("Correct Password! Welcome back, Admin!");
	}
}
void choice2(){
	printf("You chose Student.\n");
}
void choice3(){
	printf("You chose Teacher.\n");
}
