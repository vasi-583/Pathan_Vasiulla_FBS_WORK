void main()
 {
    int a, b, c, greatest;


    printf("enter three number: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a > b) {
        if (a > c) {
            greatest = a;
        } else {
            greatest = c;
        }
    } else {
        if (b > c) {
            greatest = b;
        } else {
            greatest = c;
        }
    }

    printf("The greatest number is: %d\n", greatest);

    
}