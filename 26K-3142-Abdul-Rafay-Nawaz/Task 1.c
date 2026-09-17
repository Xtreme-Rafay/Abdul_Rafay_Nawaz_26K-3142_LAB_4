#include <stdio.h>
#include <conio.h>
int main()
{
	float a, b;
	printf("Enter student marks in percentage %%: ");
	scanf("%f", &a);
	printf("Enter family income in Rs. ");
	scanf("%f", &b);
	if (a >= 80 || b < 50000)
	{
		printf("Congratulations! The student qualifies for the scholarship.\n");
	}
	else
		printf("The student does not qualify for the scholarship.\n");
	return 0;
}

