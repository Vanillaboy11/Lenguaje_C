#include <stdio.h>

int main()
{
  float pay, dis, tot;
  int mem;

  printf("Ingrese el total pagado: ");
  scanf("%lf", &pay);
  printf("Cuenta con membresia premium? (1.- sí, 0.- no): ");
  scanf("%d", &mem);

  dis = (pay >= 1000 && mem == 1) ? pay * 0.15 : (pay >= 1000) ? pay * 0.10: 0.0;

  tot = pay - dis;

  printf("Pago: $%.2lf\n", pay);
  printf("descuento: $%.2lf\n", dis);
  printf("Total: $%.2lf\n", tot);

  return 0;
}
