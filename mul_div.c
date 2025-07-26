#include <stdio.h>

int main() {

   int num = 0;
   int n = 0;

   printf("Enter the number: ");
   scanf("%d", &num);

   printf("Enter the power of 2: ");
   scanf("%d", &n);

   int result= num<<n;
   int result1 = num>>n;

   printf("Result %d", result);
   printf("Result %d", result1);

return 0;
}
