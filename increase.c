#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a<=b && b<=c ) {
      printf("With increase: %d %d %d\n", a, b, c);
    } else if (b<=a && a<=c) {
        printf("With increase: %d %d %d", b, a, c);
    } else if (a<=c && c<=b) {
        printf("With increase: %d %d %d", a, c, b);
    } else if (b<=c && c<=a) {
        printf("With incraese: %d %d %d", b, c, a);
    } else if (c<=a && a<=b) {
        printf("With increase: %d %d %d", c, a, b);
    } else if (c<=b && b<=a) {
        printf("With increase: %d %d %d", c, b, a);
    }
    return 0;
}