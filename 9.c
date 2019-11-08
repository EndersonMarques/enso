#include <stdio.h>
int ehprimo(int n) {

   int i;

   for (i=2; (i<n) && (n%i != 0); i++);

   return (n>1 && i>=n);

}

int main() {

   int num, n1=2, n2;

   printf("Informe um número: ");

   scanf("%d", &num);

   while ((n2 = num / n1) > 0) {

      if ((num == n1 * n2) && ehprimo(n2)) {

         printf("\n%d (%d * %d) é semiprimo\n", num, n1, n2);

         break;

      }

      while (! ehprimo(n1++));

   }

   if (num != n1*n2)

      printf("\n%d não é semiprimo\n", num);      

   return 0;

}