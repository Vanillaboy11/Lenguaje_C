#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, ac = 0;
  printf("Ingrese un numero: ");

verificar: // verifica que el numero sea al menos 1, si es menor como negativo o cero regresara
  scanf("%d", &n);
  if (n < 1)
  {
    goto verificar;
  }

  for (i = 1; i < n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        for (int k = 0; k < j; k++)
        {
          ac += k;
          if (ac == j && j != 1)
          {
            printf("El numero: %d es perfecto\n", i);
          }
        }
      }
    }
  }
}