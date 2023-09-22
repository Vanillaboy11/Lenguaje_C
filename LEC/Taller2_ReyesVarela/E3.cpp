#include<stdio.h>

int main()
{
  int num;

  printf("Ingrese un numero entero: ");
  scanf("%d", &num);

  if (num % 2 == 0)
  {
    if (num > 0)
    {
      printf("El numero es par y positivo");
    }
  }  
}