#include <stdio.h>

int main()
{
  int num = 37;

  int n_bits = 0, i;
  int temp = num;

  while (temp > 0)
  {
    temp /= 2;
    n_bits++;
  }

  int bits[n_bits];
  int indice;

  while (num > 0)
  {
    bits[indice] = num % 2;
    num /= 2;
    indice++;
  }

  printf("Numero de bits: ");

  for (int i = indice - 1; i >= 0; i--)
  {
    printf("%d", bits[i]);
  }
  printf("\n");

  int complemento = ~num;

  i = 0;
  temp = complemento;
  while (temp > 0)
  {
    bits[indice] = temp % 2;
    temp /= 2;
    indice++;
  }

  printf("Complemento a uno en binario: ");
  for (int i = indice - 1; i >= 0; i--)
  {
    printf("%d", bits[i]);
  }
  printf("\n");

  return 0;
}
