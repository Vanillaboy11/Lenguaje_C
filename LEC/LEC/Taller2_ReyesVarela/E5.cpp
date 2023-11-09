#include<stdio.h>

int main()
{
  int yr;

  printf("Ingrese un año: ");
  scanf("%d", &yr);

  if ((yr % 4 == 0 && yr % 100 != 0) || (yr % 400 == 0))
  {
    printf("Es bisiesto");
  }
  else
  {
    printf("No es bisiesto");
  }
}