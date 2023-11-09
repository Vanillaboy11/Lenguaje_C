#include<stdio.h>
#include<math.h>
int Primo(int numero);

int main()
{
  int n, i=0;
  printf("introduce un numero entero positivo \n");
  scanf("%d",&n);

  for(i=2; i<=n; i++)
   {
    if (Primo(i))
     {
      printf("%d,", i);
     }
   }
}

int Primo(int num)
{
  int i;
  if (num == 0 || num == 1) return 0;
  if (num == 4) return 0;
  for (i = 2; i < num / 2; i++)
  {
    if (num % i == 0) return 0;
  }
  return 1;
}