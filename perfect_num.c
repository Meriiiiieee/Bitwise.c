#include <stdio.h>

  int main() {
  int num = 0;
  int sum = 0;

 printf("Enter the number: ");
 scanf("%d", &num);

 for (int i=1; i<num; i++) {
  if (num%i ==0) {
  sum += i;
   }
}

  if (sum==num) {
      printf("Number %d is perfect:", num);
  } else {
      printf("Number %d is not perfect: ", num);
    }

return 0;
}