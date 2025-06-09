#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5, sum, average;

    printf("Enter five numbers:\n");
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    // Calculate sum
    sum = num1 + num2 + num3 + num4 + num5;

    // Calculate average
    average = sum / 5;

    // Output the average
    printf("The average of the five numbers is: %f\n", average);

}
