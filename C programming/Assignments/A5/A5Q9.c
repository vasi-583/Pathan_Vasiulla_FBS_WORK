#include <stdio.h>

void main()
 {
    int n = 4;
    int i = 0;
    while(i < n * n)
	 {
        int row = i / n;
        int col = i % n;
        if(row == 0 || row == n - 1 || col == 0 || col == n - 1)
            printf("* ");
        else
            printf("  ");
        if(col == n - 1)
            printf("\n");
        i++;
    }
}