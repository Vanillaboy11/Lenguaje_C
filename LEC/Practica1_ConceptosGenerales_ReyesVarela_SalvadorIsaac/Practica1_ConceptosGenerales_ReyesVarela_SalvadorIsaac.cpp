// Autor: Salvador Isaac Reyes Varela, grupo 932
// 2023/22/08

#include<stdio.h>
#include<math.h>
#include<iostream>
#define PI 3.1416

int main()
{
  int randnum, num;  // esta parte es para el juego de azar, el primero guarda el numero random y el otro es que el usuario ingresa
  char accion, operacion, figura; // aqui se definen las expresiones de los switch
  float n1, n2; // aqui se definen las variables de la calculadora basica
  float base, altura, radio, area, area_cubo; // esta parte es para definir las variables de las figuras en el caso 3 de la calculadora de areas
  
  printf("Bienvenido \n");
  printf(" op1: calculadora \n op2: juego de adivinar \n op3: calcular areas \n");
  printf("Ingrese una opcion: (1,2,3) \n");
  scanf("%c", &accion);

  switch (accion)
  {
  case '1':

    printf("Ingrese un operador (+, -, /, *): \n");
    scanf("%c", &operacion);
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
      break;
    }
    break;

  case '2':
    randnum = (rand() % (100 - 1 + 1)) + 1;
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
      scanf("%d", &num);
    }
    printf("yey!!!");
    break;

  case '3':
    printf("Ingrese la figura: \n");
    printf(" 1: triangulo \n 2: circulo \n 3: rectangulo \n 4: cubo \n 5: cilindro \n");
    scanf("%c", &figura);
    scanf("%c", &figura);

    switch (figura)
    {
    case '1':
      printf("Ingrese la base: \n");
      scanf("%f", &base);
      printf("Ingrese la altura: \n");
      scanf("%f", &altura);
      area = (base * altura)/2;
      printf("area: %f \n", area);
      break;

    case '2':
      printf("Ingrese el radio: \n");
      scanf("%f", &radio);
      area = PI * (pow(radio,2));
      printf("area: %f \n", area);
      break;
    
    case '3':
      printf("Ingrese la base: \n");
      scanf("%f", &base);
      printf("Ingrese la altura: \n");
      scanf("%f", &altura);
      area = base * altura;
      printf("area: %f \n", area);
      break;
    
    case '4':
      printf("Ingrese la base de una de sus caras: \n");
      scanf("%f", &base);
      area = base * base;
      area_cubo = area * 6;
      printf("area: %f \n", area_cubo);
      break;
    
    case '5':
      printf("Ingrese el radio: \n");
      scanf("%f", &radio);
      printf("Ingrese la altura: \n");
      scanf("%f", &altura);
      area = 2 * PI * radio * (radio + altura);
      printf("area: %f \n", area);
      break;
    
    default:
      break;
    }
  default:
    break;
  }
}