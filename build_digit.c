#include <stdio.h>

int main() {
    int a=0;
    int b=0;
    int c=0;
    
    printf("Enter fisrt digit: ");
    scanf("%d", &a);
    
    printf("Enter second digit: ");
    scanf("%d", &b);
    
    printf("Enter third digit: ");
    scanf("%d", &c);
    
    int number = (a * 100 + b * 10 + c);

    printf("The number is: %d\n", number);

    return 0;
}