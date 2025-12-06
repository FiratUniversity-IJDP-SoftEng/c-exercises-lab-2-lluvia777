 #include <stdio.h>
 int main() {
    int numbers[10];
    int i;
    int sum = 0;
    float average;
    for(i = 0; i<10; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = sum / 10.0;
    printf("Numbers entered: ");
    for(i=0; i<10; i++){
        printf("%d", numbers[i]);

    }
    printf("\nSum: %d", sum);
    printf("\nAverage: %.2f\n", average);
    return 0;
 }
