#include<stdio.h>
#include<math.h>
long calcularPotencia(long a, long c);

int main()
{
  float b, e, potencia;
  printf("Ingrese un numero: \n");
  scanf("%f", &b);
  printf("Ingresa el exponente al que sera elevado: \n");
  scanf("%f", &e);
  potencia = calcularPotencia(b,e);
  printf("El valor final es %f", potencia);
}

long calcularPotencia(long a, long c)
{
  long i = 1, resultado = a;
  while (i<c) 
  {
    if (resultado<a)
    {
      resultado = a * a;
    }
    else
    {
      resultado = resultado * a;
    }
    i++;
  }
  return resultado;
}