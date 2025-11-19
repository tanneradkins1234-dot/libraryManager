#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cjson/cJSON.h>

int addBooks() {
 	FILE *fp = fopen("books.csv", "a+");
	
	char author [50];
	char bookName[100];
		
	if (!fp) {
		printf("Cant open File\n");
		return 1;
	}
	
	getchar();
	printf("Input The Author: ");
	fgets(author, 50, stdin);
	author[strcspn(author, "\n")] = 0;
	printf("Author Entered: %s\n", author);
	printf("|---------------------------|\n");

	printf("Input The Book Name: ");
	fgets(bookName, 100, stdin);
	bookName[strcspn(bookName, "\n")] = 0;
  	printf("Book Name Entered: %s\n", bookName);
	printf("|---------------------------|\n");
	printf("Adding data to books.csv...\n");
	fprintf(fp, "%s, %s\n", author, bookName);
	printf("|---------------------------|\n");
	printf("Information Added Successfully\n");
	fclose(fp);	
	return 0;
}

int removeBooks() {
	printf("This Is Where You Remove Books\n");
	return 0;
}

int viewBooks() {
	printf("This is Where You View Books\n");
	return 0;
}

int addMembers() {
	
	FILE *fp = fopen("members.csv", "a+");
	
	char name[50];
	char email[100];
	char phoneNumber[50];

	if (!fp) {
		printf("Cant Open File\n");
		return 1;
	}

	getchar();
	printf("Input Member Name: ");
	fgets(name, 50, stdin);
	name[strcspn(name, "\n")] = 0;
	printf("Name Entered: %s\n", name);
	printf("|--------------------------|\n");
	
	printf("Input Member Email: ");
	fgets(email, 100, stdin);
	email[strcspn(email, "\n")] = 0;
	printf("Email Entered: %s\n", email);
	printf("|--------------------------|\n");

	printf("Input Member Phone Number: ");
	fgets(phoneNumber, 50, stdin);
	phoneNumber[strcspn(phoneNumber, "\n")] = 0;
	printf("Phone Number Entered: %s\n", phoneNumber);
	printf("|--------------------------|\n");
	printf("Adding Data To members.csv...\n");
	fprintf(fp, "%s, %s, %s\n", name, email, phoneNumber);	
	printf("|--------------------------|\n");
	printf("Member Added Successfully \n");
	fclose(fp);

	return 0;
}

int editMRecords() {
	printf("This Is Where You Edit Member Records\n");
	return 0;
}

int viewMembers() {
	printf("This Is Where You View Members\n");
	return 0;
}



int main() {
	printf("|----------Library Manager---------|\n");
	printf("|-----Enter a Number-----|\n");
	printf("1. Add a Book\n");
	printf("2. Remove a Book\n");
	printf("3. View Books\n");
	printf("4. Add a Member\n");
	printf("5. Edit Member Records\n");
	printf("6. View Members\n");
	printf("7. Quit\n");
	printf("|-----Enter a Number-----|\n");
	
	int usrInp;
	scanf("%d", &usrInp);

	if (usrInp == 1) {
		addBooks();
	}
	else if (usrInp == 2) {	
		removeBooks();
	}
	else if (usrInp == 3) {
		viewBooks();
	}
	else if (usrInp == 4) {
		addMembers();		
	}
	else if (usrInp == 5) {
		editMRecords();
	}
	else if (usrInp == 6) {
		viewMembers();
	}
	else if (usrInp == 7) {
		exit(0);
	}
	else {
		printf("Error: Invalid Input\n");
		printf("Please Input a Number (1-7)\n");
	}
	
	return 0;
}	
