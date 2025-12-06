#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d \t %d \t %d \n", (i * 5), (100 - ((i - 1) * 10 + 1)), i);
    }
    return 0;
}