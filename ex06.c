#include <stdio.h>

int main() {
int numbers[20];
int i ;
int count = 0;
for (i=99; i>50; i = i-3){
    numbers[count] = i;  
    count++;         
}
for (i = 0; i<count; i++) {
    printf("%d", numbers[i]);

    if(i<count-1){
        printf(", ");

    }
}
printf("\n");
    return 0;
}







#include <stdio.h>

int main() {
int numbers[20];
int i ;
int count = 0;
for (i=99; i>50; i = i-3){
    numbers[count] = i;  
    count++;         
}
for (i = 0; i<count; i++) {
    printf("%d", numbers[i]);

    if(i<count-1){
        printf(", ");

    }
}
printf("\n");
    return 0;
}

