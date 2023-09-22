#include<stdio.h>
#include<math.h>
#define TASA_DESCUENTO 0.1

int main()
{
  float precio, descuento, prefin;
  printf("ingresa el precio del producto:\n");
  scanf("%f", &precio);
  descuento = (precio * TASA_DESCUENTO);
  prefin = (precio - descuento);
  printf("El precio final es de: %f", prefin);
}