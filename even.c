#include <stdio.h>

int main () {

    int num = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    if((num & 1) == 0) {
        printf("The number is even: ");
    } else {
        printf("The number is odd: ");
      }  
           
    return 0;
}    
