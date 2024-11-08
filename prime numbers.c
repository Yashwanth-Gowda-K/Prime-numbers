#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    // Ask user for a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is less than 2 (not prime)
    if (number < 2) {
        printf("%d is not a prime number.\n", number);
        return 0;
    }

    // Check if the number has any divisors other than 1 and itself
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) { // If divisible by any number other than 1 and itself
            isPrime = 0; // Set isPrime to false
            break;       // Exit the loop
        }
    }

    // Print whether the number is prime or not
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}
