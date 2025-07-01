#include <stdio.h>

void main()
 {
    int n = 4;
    int row = 1;
    while(row <= n)
	 {
        int i = 0;
        while(i < n - row)
		 {
            printf(" ");
            i++;
        }
        i = 0;
        while(i < 2 * row - 1)
		 {
            printf("*");
            i++;
        }
        printf("\n");
        row++;
    }

    row = n - 1;
    while(row >= 1)
	 {
        int i = 0;
        while(i < n - row)
		 {
            printf(" ");
            i++;
        }
        i = 0;
        while(i < 2 * row - 1) 
		{
            printf("*");
            i++;
        }
        printf("\n");
        row--;
    }
}