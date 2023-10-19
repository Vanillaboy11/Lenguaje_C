#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu(void);
int msgs(void);

int sum(int *ptr, int size_);
void copy(int *orig, int *dest, int size_);
void conca(int *ptr_1, int *ptr_2);
void comp(int *ptr_1, int *ptr_2);

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

  // case 1
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size_;
  int plus;

  // case 2
  int arr_2[6];
  do
  {
    op = msgs();
    switch (op)
    {
    case 1:
      size_ = sizeof(arr) / sizeof(arr[0]);
      plus = sum(arr, size_);
      printf("La suma de los elementos del arreglo es de: %d\n", plus);
      system("pause");
      break;
    case 2:
      size_ = sizeof(arr) / sizeof(arr[0]);
      copy(arr, arr_2, size_);

      printf("Origen: \n");
      for (i = 0; i < size_; i++)
      {
        printf("%d ", arr[i]);
      }

      printf("\nDestino: \n");
      for (i = 0; i < size_; i++)
      {
        printf("%d ", arr_2[i]);
      }
      system("pause");
      break;
    case 3:
     // conca();
      break;
    case 4:
     // comp();
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

void conca(int *ptr_1, int *ptr_2);
void comp(int *ptr_1, int *ptr_2);