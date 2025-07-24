#include <stdio.h>

int main () {
    int num  = 0;
    int n = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the bit index: ");
    scanf("%d", &n);

    num =( num | (1 << n));

    printf("After setting %d\n ", num);

    return 0;
} 
