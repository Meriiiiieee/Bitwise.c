#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num<=0) {
        printf("Input only postive values: ");
    }
    
    printf("Divisors of %d are :", num);

    for (int i=1; i<=num; i++) {
        if (num%i == 0) {
            printf("%d", i);
        }
    } 

    return 0;
}