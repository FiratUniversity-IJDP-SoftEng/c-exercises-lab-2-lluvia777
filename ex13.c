#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number (less than 50): ");
    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Invalid input! Please enter a number between 0 and 49.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, factorial(n));

    return 0;
}
