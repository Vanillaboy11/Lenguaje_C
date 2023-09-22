#include<stdio.h>
#include<math.h>
int factorial(int n);

int main ()
{
  int num, fact;
  printf("Ingresa un numero: \n");
  scanf("%d", &num);
  fact = factorial(num);
  printf("Su numero factorial es: %d", fact);
}

int factorial(int n) {
   if(n < 0)
   {
    return 0;
   }
   else if(n > 1)
   {
    return n * factorial(n-1);
   }
   return 1;
}
