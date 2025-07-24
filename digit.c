#include <stdio.h>

int main () {
    int n = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if ((n & (n -1)) == 0) {
        printf("Number is digit of 2: ");
    } else {
        printf("Is not digit: ");
      }

    return 0;
} 
