
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void);
int msgs(void);

int sum(int *ptr, int size_);
void copy(int *orig, int *dest, int size_);
void conca(int *ptr_1, int *ptr_2, int *ptr_3, int size_, int size_2);
int comp(int *ptr_1, int *ptr_2, int size_);

int main()
{
  menu();
  return 0;
}

int msgs()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- Suma de elementos \n");
  printf("2.- Copia de arreglos \n");
  printf("3.- Concatenacion \n");
  printf("4.- Comparacion \n");
  printf("0.- Salir  \n");
  printf("Escoge una opcion: ");
  scanf("%d", &op);
  return op;
}

void menu(void)
{
  int op;
  int i;

  int arr[] = {1, 2, 3, 4, 5, 6};
  int arr_2[] = {7, 8, 9, 10};
  int arr_4[6];
  int size_ = sizeof(arr) / sizeof(arr[0]);
  int size_2 = sizeof(arr_2) / sizeof(arr_2[0]);
  int size_3 = size_ + size_2;
  int plus;

  int *arr_3 = (int *)malloc(size_3 * sizeof(int));

  int iguales = comp(arr, arr_2, size_);

  do
  {
    op = msgs();
    switch (op)
    {
    case 1:
      plus = sum(arr, size_);
      printf("La suma de los elementos del arreglo es de: %d\n", plus);
      system("pause");
      break;

    case 2:
      copy(arr, arr_4, size_);

      printf("Origen: \n");
      for (i = 0; i < size_; i++)
      {
        printf("%d ", arr[i]);
      }

      printf("\nDestino: \n");
      for (i = 0; i < size_; i++)
      {
        printf("%d ", arr_4[i]);
      }
      system("pause");
      break;

    case 3:
      conca(arr, arr_2, arr_3, size_, size_2);

      printf("Arreglo: \n");
      for (i = 0; i < size_3; i++)
      {
        printf("%d ", arr_3[i]);
      }

      system("pause");
      break;

    case 4:
      if (iguales)
      {
        printf("Los arreglos son iguales.\n");
      }
      else
      {
        printf("Los arreglos son diferentes.\n");
      }
      break;

    case 5:
    
      break;
    }

  } while (op != 0);
}

int sum(int *ptr, int size_)
{
  int plus = 0;
  int *ptr_2 = ptr;

  for (int i = 0; i < size_; i++)
  {
    plus += *ptr_2;
    ptr_2++;
  }

  return plus;
}

void copy(int *orig, int *dest, int size_)
{
  for (int i = 0; i < size_; i++)
  {
    *dest = *orig;
    orig++;
    dest++;
  }
}

void conca(int *ptr_1, int *ptr_2, int *ptr_3, int size_, int size_2)
{
  int i;
  for (i = 0; i < size_; i++)
  {
    *ptr_3 = *ptr_1;
    ptr_3++;
    ptr_1++;
  }

  for (i = 0; i < size_2; i++)
  {
    *ptr_3 = *ptr_2;
    ptr_2++;
    ptr_3++;
  }
}

int comp(int *ptr_1, int *ptr_2, int size_)
{
  for (int i = 0; i < size_; i++)
  {
    if (*ptr_1 != *ptr_2)
    {
      return 0;
    }
    ptr_1++;
    ptr_2++;
  }
  return 1;
}
