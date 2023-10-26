// pointers.cpp
// Autor: Salvador Isaac Reyes Varela
// oct/16/2023
// Realizar funciones basicas utilizando punteros

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ptr(void);
void multiplicarPorDos(int &x);
void arreglos(void);
int repetidos(int vect[], int n, int num);
void sumarAElementos(int *vect, int sum);
void elementoMaximo(int *arr, int size);

int main()
{
  srand(time(NULL));
  int num = 12;
  int *pntr = &num;
  int arr[5] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  ptr();
  multiplicarPorDos(*pntr);
  printf("Valor de pntr: %d\n\n", *pntr);
  arreglos();
  printf("\n");
  pntr = arr;
  sumarAElementos(pntr, 2);
  printf("\n\n");
  elementoMaximo(arr, size);
}

void ptr(void)
{
  int x = 8;
  int *ptr = &x;
  printf("Valor de x: %d\n", *ptr);
  printf("Valor al que apunta x: %p\n\n", ptr);
}

void multiplicarPorDos(int &x)
{
  x = x * 2;
}

void arreglos(void)
{
  int arr[7], i, num;
  for (i = 0; i < 7; i++)
  {
    do
    {
      num = rand() % 51;
    } while (repetidos(arr, i, num) != -1);

    arr[i] = num;
  }

  int *ptr = arr;
  for (i = 0; i < 7; i++)
  {
    printf("%d\t", *ptr++);
  }
}

int repetidos(int vect[], int n, int num)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (vect[i] == num)
    {
      return i;
    }
  }
  return -1;
}

void sumarAElementos(int *vect, int sum)
{
  int leng = sizeof *vect;
  int i;
  for (i = 0; i < leng + 1; i++)
  {
    printf("%d\t", *vect + sum);
    vect++;
  }
}

void elementoMaximo(int *arr, int size)
{
  int i, step;
  int temp;
  for (step = 0; step < size; ++step)
  {
    for (i = 0; i < size - step; ++i)
    {
      if (arr[i] > arr[i + 1])
      {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
  printf("El valor maxio es = %d", arr[size]);
}
