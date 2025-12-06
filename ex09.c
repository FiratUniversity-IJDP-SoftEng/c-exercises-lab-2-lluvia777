#include <stdio.h>

int main() {
     int number;
     int count = 0;
     int sum = 0;
     float average;

    printf("Enter numbers (-1 to stop):\n");

    while (1) {
        printf("Number: ");
        scanf("%d", &number);
   
        if (number == -1) {
            break;
        }

        sum += number;
        count++;
    }

    printf("Total Sum: %d\n", sum);

 
    if (count > 0) {
        average = (float)sum / count;
        printf("Count: %d\n", count);
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}