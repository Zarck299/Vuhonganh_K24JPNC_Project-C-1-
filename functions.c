#include <stdio.h>
#include "functions.h"
//logic ham functions.h
void displayMenu() {
    printf("\t***Student Management System Using C***\n");
    printf("\n");
    printf("CHOOSE YOUR ROLE\n");
    printf("=========================\n");
    printf("[1] Admin.\n");
    printf("[2] Student.\n");
    printf("[3] Teacher.\n");
    printf("[0] Exit the Program.\n");
    printf("=========================\n");
    printf("\nEnter The Choice: ");
}
void displayStudents(Student students[], int count) {// Ham in ra danh sach sinh vien
    if (count == 0) {
        printf("\nNo students in the list.\n");
        return;
    }
    else{
    	printf("\n--- Student List ---\n");
    	for (int i = 0; i < count; i++) {
//        printf("ID: %d, Name: %s, Age: %d\n", students[i].id, students[i].name, students[i].age);
		printf("\t----------***All Student***----------\n");
		printf("|==========|====================|========================|====================|============|\n");
		printf("|    ID    |        Name        |          Email         |        Phone       |  NO.Course |\n");
		printf("|==========|====================|========================|====================|============|\n");
		printf("|1		   |Vu Hong Anh         |honganhzarck@gmail.com  |0976460744          |1           |\n");
		printf("|==========|====================|========================|====================|============|\n");
		printf("|2         |Bui Van Anh         |anhvanbui1105@gmail.com |0123456789          |2           |\n");
		printf("|==========|====================|========================|====================|============|\n");
		printf("|3         |Nguyen Thanh Cong   |congbe2304@gmail.com    |0344352352          |3           |\n");
		printf("|==========|====================|========================|====================|============|\n");
    	}
    printf("\t---------------------\n");
	}
}
void addStudent(Student students[], int *count) {// Ham them sinh vien vao danh sach co san
    if (*count >= 100) {
        printf("\nStudent list is full. Cannot add more students.\n");
        return;
    }
    printf("\nEnter Student ID: ");
    scanf("%d", &students[*count].id);
    getchar();
    printf("Enter Student Name: ");
    fgets(students[*count].name, sizeof(students[*count].name), stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';
    printf("Enter Student Age: ");
    scanf("%d", &students[*count].age);
    (*count)++;
    printf("\nStudent added successfully!\n");
}
