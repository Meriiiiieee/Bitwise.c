#include <stdio.h>

int main () {
    char c = 0;

    printf("Enter the letter: ");
    scanf("%c", &c);

    if(c>='A' && c<='Z') {
        c = c + 32;
        printf("Lowercase %c\n: ", c);
    } else if (c>='a' && c<='z'){
        c = c - 32;
        printf("Uppercase %c\n: ", c);
      }

    return 0;
}  
