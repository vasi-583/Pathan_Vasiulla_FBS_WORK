#include <stdio.h>

int main() 
{
	
    float length, width, perimeter;



    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of rectangle: ");
    scanf("%f", &width);


    perimeter = 2 * (length + width);


    printf("The perimeter of rectangle is: %.2f\n", perimeter);

}
