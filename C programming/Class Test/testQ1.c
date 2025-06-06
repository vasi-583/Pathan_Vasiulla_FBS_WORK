//write a c programme toconvert the time entered in hh , min and second into total seconds.
#include<stdio.h>
#include <stdio.h>

int main() {
    int hours, minutes, seconds, totalSeconds;

   
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total time in seconds: %d\n", totalSeconds);

    return 0;
}

