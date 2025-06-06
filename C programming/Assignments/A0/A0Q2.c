//Area of circle =pi*r*r;
#include<stdio.h>
void main()
{
	float radius,area;
	const PI=3.14;
	
	printf("enter the radius:");
	scanf("%f", &radius);
	
	area=PI*radius*radius;
	printf("The area of Circle with radius of %.2f is %.2f\n", radius, area);
}