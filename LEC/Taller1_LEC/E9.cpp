#include<stdio.h>
#include<math.h>
int esPrimo(int a);

int main()
{
  int num, i, ac = 0;
  printf("Ingrese un numero entero positivo \n");
  scanf("%d", &num);
  for(i=1; i<=4;)
   {
    if (esPrimo(num))
     {
      if(num <= ac)
      {
        printf("ingresa el siguiente numero primo \n");
      }
      else
      {
        printf("Es primo \n");
        i++;
        ac = num;
      }
     }
     else
     {
      printf("No es primo \n");
     }
     scanf("%d", &num);

   }
  return 0;
}

int esPrimo(int num)
{
  int j;
  if (num == 0 || num == 1) return 0;
  if (num == 4) return 0;
  for (j = 2; j < num / 2; j++)
  {
    if (num % j == 0) return 0;
  }
  return 1;
}