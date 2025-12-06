#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;

    printf("Enter a number (less than 50): ");
    scanf("%d", &n);

    if (n < 0 || n >= 50) {
        printf("Invalid input! Please enter a number between 0 and 49.\n");
        return 1;
    }

    if (n == 0) {
        printf("0! = 1\n");
    } else {
        printf("%d! = ", n);
        for (i = n; i >= 1; i--) {
            printf("%d", i);
            if (i > 1) {
                printf(" * ");
            }
            fact *= i;
        }
        printf(" = %llu\n", fact);
    }

    return 0;
}
