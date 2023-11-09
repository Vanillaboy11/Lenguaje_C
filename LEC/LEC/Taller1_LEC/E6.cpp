#include<stdio.h>
#include<stdlib.h>

int main()
{
  int randnum, num;
  randnum = (rand() % (100 - 1 + 1)) + 1;
  printf("%d \n", randnum);
  printf("Ingrese un numero postivo entero: \n");
  scanf("%d", &num);
  while (num != randnum)
  {
    if(num > randnum)
    {
      printf("Mas bajo \n");
    }
    if(num < randnum)
    {
      printf("mas alto \n");
    }
    printf("Ingrese otro numero: \n");
    scanf("%d",num);
  }
  printf("yey!!!");
}