#include<stdio.h>

int main ()
{
  int num;
  printf("Ingrese un numero entero: ");
  scanf("%d", &num);

  if (num != 0)
  {
    if (num > 0)
    {
      printf("El numero %d es positivo", num);
    }
    else
    {
      printf("El numero %d es negativo", num);
    }
  }
  else
  {
    printf("El numero ingresado es 0");
  }
}