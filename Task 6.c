#include <stdio.h>
#include <conio.h>
int main()
{
	float celsius, fahrenheit;
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);
	fahrenheit = (celsius*9.0/5.0)+32.0;
	printf("Temperature in Fahrenheit: %f F\n", fahrenheit);
    return 0;
}

