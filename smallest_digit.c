#include <stdio.h>

int main() {
    int number=0;
   int smallest_digit=9;
    int digit =0;
    
    printf("Enter number ");   
    scanf("%d", &number);  
    

    while (number > 0) {
        digit = number % 10;  
        if (digit < smallest_digit) {
            smallest_digit = digit;
        }
        number /= 10;
    }
    
    printf("%d\n", smallest_digit);  
    
    return 0;
}