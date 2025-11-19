#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int addBooks() {
 	FILE *fp = fopen("books.csv", "a+");

	char bookNumber[25];	
	char author [50];
	char bookName[100];
		
	if (!fp) {
		printf("Cant open File\n");
		return 1;
	}
	
	getchar();
	printf("Input The Book Number: (1, 2, 3, etc.) ");
	fgets(bookNumber, 25, stdin);
	bookNumber[strcspn(bookNumber, "\n")] = 0;
	printf("Book Number Entered: %s\n", bookNumber);
	printf("|---------------------------|\n");	

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
	fprintf(fp, "%s, %s, %s\n", bookNumber , author, bookName);
	printf("|---------------------------|\n");
	printf("Information Added Successfully\n");
	fclose(fp);	
	return 0;
}

int viewBooks() {
	FILE *fp = fopen("books.csv", "r");
	if (!fp) {
		printf("Cannot Open File\n");
		return 1;
	}

	char fileContent[1000];
	while (fgets(fileContent, 1000, fp)) {
		printf("%s\n", fileContent);
	};

	fclose(fp);	
	return 0;
}

int addMembers() {	
	FILE *fp = fopen("members.csv", "a+");

	char memberNumber[25];	
	char name[50];
	char email[100];
	char phoneNumber[50];

	if (!fp) {
		printf("Cant Open File\n");
		return 1;
	}

	getchar();
	printf("Input Number of Member: (1, 2, 3, etc.) ");
	fgets(memberNumber, 25, stdin);
	memberNumber[strcspn(memberNumber, "\n")] = 0;
	printf("Number Entered: %s\n", memberNumber);
	printf("|--------------------------|\n");	

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
	fprintf(fp, "%s, %s, %s, %s\n", memberNumber , name, email, phoneNumber);	
	printf("|--------------------------|\n");
	printf("Member Added Successfully \n");
	fclose(fp);

	return 0;
}

int bookIss() {
	char name[50];
	char book[100];
	char date[50];

	FILE *fp = fopen("bookIss.csv", "a+");
	if (!fp) {
		printf("Cant Open File\n");
		return 1;
	}

	getchar();
	printf("Input Member Name: ");
	fgets(name, 50, stdin);
	name[strcspn(name, "\n")] = 0;
	printf("Member Name Entered: %s\n", name);
	printf("|--------------------------|\n");
	
	printf("Input Book Name: ");
	fgets(book, 100, stdin);
	book[strcspn(book, "\n")] = 0;
	printf("Book Name Entered: %s\n", book);
	printf("|--------------------------|\n");
	
	printf("Input Date of Issue: (mm/dd/yyyy) ");
	fgets(date, 50, stdin);
	date[strcspn(date, "\n")] = 0;
	printf("Date Name Entered: %s\n", date);
	printf("|--------------------------|\n");
	printf("Adding Data To bookIss.csv...\n");
	fprintf(fp, "%s, %s, Date Issued: %s", name, book, date);
	printf("|--------------------------|\n");
	printf("Book Issued\n");

	return 0;
}

int bookRet() {
	char name[50];
	char book[100];
	char date[50];

	FILE *fp = fopen("bookRet.csv", "a+");
	if (!fp) {
		printf("Cant Open File\n");
		return 1;
	}

	getchar();
	printf("Input Member Name: ");
	fgets(name, 50, stdin);
	name[strcspn(name, "\n")] = 0;
	printf("Member Name Entered: %s\n", name);
	printf("|--------------------------|\n");
	
	printf("Input Book Name: ");
	fgets(book, 100, stdin);
	book[strcspn(book, "\n")] = 0;
	printf("Book Name Entered: %s\n", book);
	printf("|--------------------------|\n");
	
	printf("Input Date of Return: (mm/dd/yyyy) ");
	fgets(date, 50, stdin);
	date[strcspn(date, "\n")] = 0;
	printf("Date Name Entered: %s\n", date);
	printf("|--------------------------|\n");
	printf("Adding Data To bookRet.csv...\n");
	fprintf(fp, "%s, %s, Date Returned: %s", name, book, date);
	printf("|--------------------------|\n");
	printf("Book Returned\n");



	return 0;
}

int viewIss() {
	FILE *fp = fopen("bookIss.csv", "r");
	if (!fp) {
		printf("Cannot Open File\n");
		return 1;
	}

	char fileContent[1000];
	while (fgets(fileContent, 1000, fp)) {
		printf("%s\n", fileContent);
	};

	fclose(fp);	
	return 0;
}

int viewRet() {
	FILE *fp = fopen("bookRet.csv", "r");
	if (!fp) {
		printf("Cannot Open File\n");
		return 1;
	}

	char fileContent[1000];
	while (fgets(fileContent, 1000, fp)) {
		printf("%s\n", fileContent);
	};

	fclose(fp);	
	return 0;
}


int editMRecords() {
	printf("|------ Issue and Return Menu ------|\n");
	printf("|------ Enter a Number ------|\n");
	printf("1. Issue a Book\n");
	printf("2. Return a Book\n");
	printf("3. View Books Issued\n");
	printf("4. View Books Returned\n");
	printf("|------ Enter a Number ------|\n");

	int usrInp1;
	scanf("%d", &usrInp1);

	if (usrInp1 == 1) {
		 bookIss();
	}
	else if (usrInp1 == 2) {
		bookRet();
	}
	else if (usrInp1 == 3) {
		viewIss();
	}
	else if (usrInp1 == 4) {
		viewRet();
	}
	else {
		printf("Error: Invalid Input.\n");
		printf("Please Enter a Number (1-2)\n");
		return 1;
	}
	
	return 0;
}

int viewMembers() {
	FILE *fp = fopen("members.csv", "r");
	if (!fp) {
		printf("Cannot Open File\n");
		return 1;
	}

	char fileContent[1000];
	while (fgets(fileContent, 1000, fp)) {
		printf("%s\n", fileContent);
	};

	fclose(fp);	
	return 0;

}



int main() {
	printf("|----------Library Manager---------|\n");
	printf("|-----Enter a Number-----|\n");
	printf("1. Add a Book\n");
	printf("2. View Books\n");
	printf("3. Add a Member\n");
	printf("4. Edit Member Records\n");
	printf("5. View Members\n");
	printf("6. Quit\n");
	printf("|-----Enter a Number-----|\n");
	
	int usrInp;
	scanf("%d", &usrInp);

	if (usrInp == 1) {
		addBooks();
	}
	else if (usrInp == 2) {
		viewBooks();
	}
	else if (usrInp == 3) {
		addMembers();		
	}
	else if (usrInp == 4) {
		editMRecords();
	}
	else if (usrInp == 5) {
		viewMembers();
	}
	else if (usrInp == 6) {
		exit(0);
	}
	else {
		printf("Error: Invalid Input\n");
		printf("Please Input a Number (1-7)\n");
	}
	
	return 0;
}	
