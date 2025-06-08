void main()
 {
    float price, discount = 0.0, finalPrice;
    char isStudent;

    printf("Enter the price: ");
    scanf("%f", &price);

    printf("are you a student? (y/n): ");
    scanf(" %c", &isStudent);  

    if (isStudent == 'y' || isStudent == 'Y') {
        if (price > 500) {
            discount = 0.20; 
        } else {
            discount = 0.10;  
        }
    } else if (isStudent == 'n' || isStudent == 'N') {
        if (price > 600) {
            discount = 0.15;  
        } else {
            discount = 0.0;   
        }
    } else {
        printf("invalid input for student status.\n");
        return 1;
    }

    finalPrice = price - (price * discount);

    printf("Discount: %.2f%%\n", discount * 100);
    printf("Final price after discount: %.2f\n", finalPrice);

    
}