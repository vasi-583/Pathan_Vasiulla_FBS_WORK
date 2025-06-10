#include <stdio.h>

int main() 
{
    int start, end, sum = 0, i;


    printf("enter start value: ");
    scanf("%d", &start);

    printf("enter end value: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        sum += i;
    }


    printf("sum = %d\n", sum);

    return 0;
}
