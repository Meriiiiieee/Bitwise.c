#include <stdio.h>

int main() {
    int num= 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if ( (num&(num-1)==0) && ((num & 0x55555555) == 0)) {
        printf(“%d is power of 4:\n “);
} else {
printf(“%d is not power of 4:\n “);
}
return 0;
}