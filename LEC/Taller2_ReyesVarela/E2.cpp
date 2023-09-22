#include<stdio.h>

int main ()
{
  float grad;
  printf("Ingrese la temperatura en grados celcius: ");
  scanf("%f", &grad);

  printf("La temperatura es de: %.2f", ((grad*1.8)+32));
}