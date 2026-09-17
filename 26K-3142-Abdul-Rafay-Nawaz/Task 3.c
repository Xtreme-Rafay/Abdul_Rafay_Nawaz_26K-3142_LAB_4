#include <stdio.h>
#include <conio.h>
int main()
{
	char fullName[100];
	char singleChar;
	char name[100];
	printf("Enter your full name (including spaces): ");
	fgets(fullName, sizeof(fullName), stdin);
	printf("You entered the full name using puts(): ");
	puts(fullName);
	printf("Enter your name again: ");
	scanf("%s", name);
	while (getchar() != '\n');
	printf("Your name till first whitespace is: %s \n", name);
	printf("\nEnter your name again: ");
	scanf(" %c", &singleChar);
	printf("Your first letter of name is: %c\n", singleChar);
	printf("\nDifference Explanation:\n");
	printf("- fgets() reads an entire line of text including spaces until a newline ('\\n') is encountered.\n");
	printf("- Standard inputs like scanf() with %%s terminates at the first whitespace, and %%c captures a single character.\n");
	return 0;
} 

