// E1.cpp
// Autor: Salvador Isaac Reyes Varela
// sep/13/2023
// Calcular el factorial de un número entero utilizando una función sin retorno

#include <stdio.h>

int main()
{
  int n, i, fac;
  printf("Ingrese un numero: ");
  scanf("%d", &n);

  fac = n;

  for (i = n-1; i >= 1; i--)
  {
    fac = fac * i;
    n = fac;
  }
  printf("%d ", fac);

}