#include <stdio.h>

int main() {
    int tmin, hr, min;


    printf("Enter total minutes: ");
    scanf("%d", & tmin);


    hr = tmin / 60;
    min = tmin % 60;


    printf("%d minutes is equal to %d hour(s) and %d minute(s)\n", tmin, hr, min);

}
