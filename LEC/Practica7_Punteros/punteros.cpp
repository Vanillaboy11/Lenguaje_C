
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define NUM_PALABRAS 5

void argumentos(char *argv[]);
void matriz();
void ordenacion();

int main(int argc, char *argv[])
{
  int op;

  do
  {
    system("cls");
    printf(" \n \tMenu \n");
    printf("1. OPERACIONES CON ARGUMETOS \n");
    printf("2. ORDENACION DE PALABRAS \n");
    printf("3. MATRIZ MULTIDIMENSIONAL \n");
    printf("0. Salir\n");

    scanf("%d", &op);
    system("cls");

    switch (op)
    {
    case 1:
      argumentos(argv);
      system("pause");
      break;
    case 2:
      ordenacion();
      system("pause");
      break;
    case 3:
      matriz();
      system("pause");
      break;
    case 0:
      printf("Hasta luego...\n");
      break;
    }
  } while (op != 0);

  return 0;
}

void argumentos(char *argv[])
{
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);

  printf("La suma de %d + %d = %d\n", num1, num2, num1 + num2);
  printf("La resta de %d - %d = %d\n", num1, num2, num1 - num2);
  printf("La multiplicacion de %d * %d = %d\n", num1, num2, num1 * num2);
  printf("La division de %d / %d = %d\n", num1, num2, num1 / num2);
}

void ordenacion()
{
  char *palabras[NUM_PALABRAS] = {"manzana", "banana", "cereza", "uva", "naranja"};
  char *temp;
  int i, j;

  for (i = 0; i < NUM_PALABRAS - 1; i++)
  {
    for (j = i + 1; j < NUM_PALABRAS; j++)
    {
      if (strcmp(palabras[i], palabras[j]) > 0)
      {
        temp = palabras[i];
        palabras[i] = palabras[j];
        palabras[j] = temp;
      }
    }
  }

  for (i = 0; i < NUM_PALABRAS; i++)
  {
    printf("%s\n", palabras[i]);
  }
}

void matriz()
{
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int max = 0, fila = 0, col = 0, suma = 0;
  int *ptr = &matriz[0][0];

  for (int i = 0; i < 3 * 3; i++)
  {
    suma += *ptr;
    if (*ptr > max)
    {
      max = *ptr;
      fila = i / 3;
      col = i % 3;
    }
    ptr++;
  }

  printf("\nSuma de la matriz: %d\n", suma);
  printf("Elemento mas grande: %d\n", max);
  printf("Fila %d\nColumna %d\n", fila, col);
}