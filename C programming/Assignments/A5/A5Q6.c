#include <stdio.h>

void main()
 {
    int n = 5;
    int row = 1, num = 1;
    while(row <= n)
	 {
        printf("%d", num++);
        if(num > row) 
		{
            printf("\n");
            row++;
            num = 1;
        }
    }
}