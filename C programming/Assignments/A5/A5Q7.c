#include <stdio.h>

void main()
 {
    int n = 4;
    int value = 1, row = 1, count = 0;
    while(row <= n)
	 {
        printf("%d ", value++);
        count++;
        if(count == row)
		 {
            printf("\n");
            row++;
            count = 0;
        }
    }
}