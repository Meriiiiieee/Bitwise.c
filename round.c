#include <stdio.h>

int main() {
    int num=0;


    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 10 >= 5) {
       num = num + (10 - num % 10);
    } else {
        num = num - num % 10;
    }

printf("Round number: %d\n", num);

    return 0;
}