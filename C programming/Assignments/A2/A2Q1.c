int main() {
    int num1, num2;
    char operator;

    printf("Enter first num1: ");
    scanf("%d", &num1);

    printf("Enter second num2: ");
    scanf("%d", &num2);


    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); 
    
    
    switch (operator) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result = %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero .\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Result = %d\n", num1 % num2);
            } else {
                printf("Error: Mod by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
