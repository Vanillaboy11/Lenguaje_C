#include<stdio.h>

int main()
{
  char operacion;
  float n1, n2;
  
  printf("Ingrese un operador (+, -, /, *): \n");
  scanf("%c", &operacion);
  printf("Ingrese un numero: \n");
  scanf("%f", &n1);
  printf("Ingrese otro numero: \n");
  scanf("%f", &n2);

  switch (operacion)
  {
  case '+':
    printf("%f + %f = %f", n1, n2, n1+n2);
    break;
  
  case '-':
    printf("%f - %f = %f", n1, n2, n1-n2);
    break;

  case '/':
    printf("%f / %f = %f", n1, n2, n1/n2);
    break;

  case '*':
    printf("%f * %f = %f", n1, n2, n1*n2);
    break;
  
  default:
    printf("Error!");
  }
}