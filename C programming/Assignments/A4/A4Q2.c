int isPrime(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
   int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a positive number.\n");
        return 1;
    }
    
    printf("Prime numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}