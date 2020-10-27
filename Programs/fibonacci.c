/* Problem: Fibonacci */

#include <stdio.h>

int main() {
   int a, b, c, i, n;
   printf(“Enter a number: “);
   scanf(“%d”,&n);
   a = b = 1;
   
   printf("%d %d ",a,b);

   for(i = 1; i <= n; i++) {
      c = a + b;
      printf("%d ", c);
      
      a = a+1;
      b = b+1;
   }
   
   return 0;
}
