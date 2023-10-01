// automatic.cpp
// Autor: Salvador Isaac Reyes Varela
// sep/30/2023
// funciones utilizando diferentes tipos de varibales (resgistro, automaticas, etc.)

#include <stdio.h>
#include <stdlib.h>

// declaracion por cabecera
#include "archivo.h"

float pi = 3.14159; // variable global 'pi'

void automatica(void);
void externa(void);
void statics(void);
void regis(void);
void global(void);
void menu(void);
int msges(void);

int main()
{
  menu();

  return 0;
}

void menu()
{
  int op, i;
  op = msges();
  switch (op)
  {
  case 1:
    for (i = 0; i < 9; i++)
    {
      automatica();
    }
    break;

  case 2:
    variableExterna = 0;
    externa();
    printf("Valor final: %d\n", variableExterna);
    break;

  case 3:
    for (i = 0; i < 9; i++)
    {
      statics();
    }
    break;

  case 4:
    regis();
    break;

  case 5:
    printf("Valor de pi global: %f\n", pi);
    global();
    break;
  }
}

int msges()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- Automatica \n");
  printf("2.- Externa \n");
  printf("3.- Estatica \n");
  printf("4.- Registro \n");
  printf("5.- Global \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}

int variableExterna;

void externa(void)
{
  // inicializacion de la variable externa
  variableExterna += 10; // modifica la variable externa
}

void statics(void)
{
  static int contador = 0;

  contador++;

  printf("valor del contador: %d\n", contador);
}

void automatica(void)
{
  int contador = 0, i;
  for (i = 1; i <= 10; i++)
  {
    contador++;
    printf("%d", contador);
    printf("\n");
  }
}

void regis(void)
{
  register int temp = 10; // variable de registro
  int valor = 5;          // variable automatica

  printf("Valor de temp (registro): %d\n", temp);
  printf("Valor de valor (automatica): %d\n", valor);
}

void global()
{
  // variable local con el mismo nombre 'pi'
  float pi = 3.141592;

  printf("Valor de pi (local) en la funcion : %f\n", pi);
}