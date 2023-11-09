// E1.cpp
// Autor: Salvador Isaac Reyes Varela
// sep/13/2023
// Calcular el ctorial de un número entero utilizando una función recursiva.

#include <stdio.h>

long int calcularFactorial(int a);

int main()
{
  int n;
  long int fact;

  printf("Ingrese un numero: ");
  scanf("%d", &n);

  fact = calcularFactorial(n);

  printf("%d! = %ld", n, fact);
}

long int calcularFactorial(int a)
{
  if(a <= 1 )
  {
    return 1;
  }
  else
  {
    return a * calcularFactorial(a-1);
  }
}