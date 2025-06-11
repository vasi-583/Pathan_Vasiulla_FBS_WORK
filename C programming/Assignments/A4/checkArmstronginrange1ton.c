void main() 
{
    int n, num, temp, digit, sum, count;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);


    for(num = 1; num <= n; num++) {
        temp = num;
        count = 0;


        while(temp != 0) {
            temp /= 10;
            count++;
        }

        temp = num;
        sum = 0;



        while(temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }


        if(sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
