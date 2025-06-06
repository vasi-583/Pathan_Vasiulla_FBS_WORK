#include<stdio.h>
void main()
{
	float celcius,  Fahrenheit ;
	
	printf("Enter the temp in celcius:");
	scanf ("%f",&celcius);
	
	Fahrenheit = (celcius *9/5) + 32;
	printf(" If Temprature is %.2f celcius is equal to %.2f Fahrenheit\n",celcius, Fahrenheit);
	
}