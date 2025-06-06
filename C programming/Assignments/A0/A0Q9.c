#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);


    area = 0.5*base*height;


    printf("area of triangle is: %.2f\n", area);

}
