#include <stdio.h>

int main () {
    int a = 0;
    int b = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before exchange: a = %d b = %d\n", a , b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After exchange: a = %d, b = %d\n", a, b);

    return 0;
}    
