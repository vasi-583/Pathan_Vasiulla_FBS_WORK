#include <stdio.h>

int main() 
{
    float sub1,sub2,sub3,sub4,sub5,total,percentage;


    printf("Enter marks of all five subjects out of 100 one by one:\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);


    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

}
