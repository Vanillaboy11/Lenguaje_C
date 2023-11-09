// sorting.cpp
// Autor: Salvador Isaac Reyes Varela
// oct/10/2023
// Realizar busquedas utilizando punteros

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define M 100
#define N 3

char readLetter();
void fillMatriz(char **q, int m, int n);
void printMe1(char *p, int m, int n);
void printMe2(char v[], int m, int n);
void printMe3(char A[][3], int m, int n);
void printMe4(char *p[], int m, int n);
void printMe5(char **q, int m, int n);

void busquedaLineal_Metodo1(char *p, int m, int n, char letter);
void busquedaLineal_Metodo2(char v[], int m, int n, char letter);
void busquedaLineal_Metodo3(char A[][3], int m, int n, char letter);
void busquedaLineal_Metodo4(char *p[], int m, int n, char letter);
void busquedaLineal_Metodo5(char **q, int m, int n, char letter);


int main()
{
  clock_t start, end;
  srand(time(NULL));
  int i, k, n;
  char b[M][N];
  char *q[M];
  char **r = q;
  double tiempo1 = 0, tiempo2 = 0, tiempo3 = 0, tiempo4 = 0, tiempo5 = 0;

  for (i = 0; i < M; i++)
  {
    q[i] = &b[i][0];
  }
  fillMatriz(r, M, N);

  printf("Ingrese la cantidad de veces que desea iterar las busquedas: ");
  scanf("%d", &n);

  char letterBusq[n];
  for (i = 0; i < n; i++)
  {
    letterBusq[i] = 'A' + rand() % 26;
  }

  for (k = 0; k < n; k++)
  {
    char letter = letterBusq[k];

    printf("Metodo 1\n");
    start = clock();
    printMe1(&b[0][0], M, N);
    busquedaLineal_Metodo1(&b[0][0], M, N, letter);
    end = clock();
    tiempo1 += (double)(end - start) / CLOCKS_PER_SEC;

    printf("Metodo 2\n");
    start = clock();
    printMe2(&b[0][0], M, N);
    busquedaLineal_Metodo2(&b[0][0], M, N, letter);
    end = clock();
    tiempo2 += (double)(end - start) / CLOCKS_PER_SEC;

    printf("Metodo 3\n");
    start = clock();
    printMe3(b, M, N);
    busquedaLineal_Metodo3(b, M, N, letter);
    end = clock();
    tiempo3 += (double)(end - start) / CLOCKS_PER_SEC;

    printf("Metodo 4\n");
    start = clock();
    printMe4(q, M, N);
    busquedaLineal_Metodo4(q, M, N, letter);
    end = clock();
    tiempo4 += (double)(end - start) / CLOCKS_PER_SEC;

    printf("Metodo 5\n");
    start = clock();
    printMe5(r, M, N);
    busquedaLineal_Metodo5(r, M, N, letter);
    end = clock();
    tiempo5 += (double)(end - start) / CLOCKS_PER_SEC;
  }

  printf("\nTiempo metodo 1: %f segundos\n", tiempo1);
  printf("Tiempo metodo 2: %f segundos\n", tiempo2);
  printf("Tiempo metodo 3: %f segundos\n", tiempo3);
  printf("Tiempo metodo 4: %f segundos\n", tiempo4);
  printf("Tiempo metodo 5: %f segundos\n", tiempo5);

  return 0;
}

char solicitarletter()
{
  char letter;
  printf("Ingrese la letra que desea buscar: ");
  scanf(" %c", &letter);

  return letter;
}

void fillMatriz(char **q, int m, int n)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      q[i][j] = 'A' + rand() % 26;
    }
  }
}

void printMe1(char *p, int m, int n)
{
  int i, j;
  printf("\nLa matriz es: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c\t", *(p + i * n + j));
    }
    printf("\n");
  }
}

void printMe2(char v[], int m, int n)
{
  int i, j;
  printf("\nLa matriz es: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c\t", v[i * n + j]);
    }
    printf("\n");
  }
}

void printMe3(char A[][3], int m, int n)
{
  int i, j;
  printf("\nLa matriz es: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c\t", A[i][j]);
    }
    printf("\n");
  }
}

void printMe4(char *p[], int m, int n)
{
  int i, j;
  printf("\nLa matriz es: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c\t", p[i][j]);
    }
    printf("\n");
  }
}

void printMe5(char **q, int m, int n)
{
  int i, j;
  printf("\nLa matriz es: \n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%c\t", q[i][j]);
    }
    printf("\n");
  }
}

void busquedaLineal_Metodo1(char *p, int m, int n, char letter)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (*(p + i * n + j) == letter)
      {
        printf("letter %c encontrada en posicion [%d][%d]\n", letter, i, j);
        return;
      }
    }
  }
  printf("Letra %c no encontrada\n", letter);
}

void busquedaLineal_Metodo2(char v[], int m, int n, char letter)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (v[i * n + j] == letter)
      {
        printf("Letra %c encontrada en posicion [%d][%d]\n", letter, i, j);
        return;
      }
    }
  }
  printf("Letra %c no encontrada\n", letter);
}

void busquedaLineal_Metodo3(char A[][3], int m, int n, char letter)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (A[i][j] == letter)
      {
        printf("Letra %c encontrada en posicion [%d][%d]\n", letter, i, j);
        return;
      }
    }
  }
  printf("Letra %c no encontrada\n", letter);
}

void busquedaLineal_Metodo4(char *p[], int m, int n, char letter)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (p[i][j] == letter)
      {
        printf("Letra %c encontrada en posicion [%d][%d]\n", letter, i, j);
        return;
      }
    }
  }
  printf("Letra %c no encontrada\n", letter);
}

void busquedaLineal_Metodo5(char **q, int m, int n, char letter)
{
  int i, j;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (q[i][j] == letter)
      {
        printf("Letra %c encontrada en posicion [%d][%d]\n", letter, i, j);
        return;
      }
    }
  }
  printf("Letra %c no encontrada\n", letter);
}