//Write a recursive function in C to calculate factorial of a number.
#include <stdio.h>

unsigned long long factorial(int n);

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }

    return 0;
}

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; 
    }
    return n * factorial(n - 1); 
}
