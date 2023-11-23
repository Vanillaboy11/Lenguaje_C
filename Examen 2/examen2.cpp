// reyes varela salvador isaac
// 2023/22/11
// examen.cpp

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct _vet
{
  int matri;
  int status;
  char nom[30];
  char especia[30];
} vet;

int msgs();
void menu(int full);

int buscar(vet reg, int n, int max);
void agregar(vet dato);
vet actualizar(vet reg, int max);
void imprimir(vet reg, int max);
vet guardar(vet reg, int max);

int main()
{
  int max;
  printf("Ingrese la cantidad total de registros: ");
  scanf("%d", &max);
  menu(max);

  return 0;
}

int msgs()
{
  int op;
  printf("1. agregar");
  printf("2. buscar");
  printf("3. actualizar");
  printf("4. imprimir");
  printf("5. guardar");
  printf("Ingrese una opcion: ");
  scanf("%d", &op);
  return op;
}

void menu(int full)
{
  int op, mat;
  vet info;
  op = msgs();

do
{
  switch (op)
  {
  case 1:
    agregar(info);
    break;

  case 2:
    printf("Ingrese la matricula a buscar: ");
    scanf("%d", &mat);
    buscar(info, mat, full);
    break;

  case 3:
    actualizar(info, full);
    break;

  case 4:
    imprimir(info, full);
    break;

  case 5:
    guardar(info, full);
    break;
  default:
    break;
  }
} while (op != 0);

}

int buscar(vet reg, int n, int max)
{
  int i;
  int j;
  int temp;
  for (i = 0; i < max; i++)
  {
    for (j = 0; j < max; j++)
    {
      temp = reg.matri;
      reg.matri = reg.matri;
      reg.matri = temp;
    }
  }

  for (i = 0; i < max; i++)
  {
    if (i == n)
    {
      return 1;
    }
    return -1;
  }
}

void agregar(vet dato)
{
  FILE *fa = fopen("registros_vet.txt", "a");
  printf("ingrese un nombre: ");
  scanf("%s", &dato.nom);
  printf("ingrese una especie: ");
  scanf("%s", &dato.especia);
  printf("ingrese una matricula: ");
  scanf("%s", &dato.matri);
  dato.status = 1;
}

vet actualizar(vet reg, int max)
{
  FILE *fa = fopen("registros_vet.txt", "a");
  printf("nombre      ||        especie       ||      matricula           ||");

  for (int i = 0; i < max; i++)
  {
    if (reg.status == 1)
    {
      printf("%s ||  %s  ||      %d      ||", reg.nom, reg.especia, reg.matri);
    }
  }
  fclose;
}

void imprimir(vet reg, int max)
{
  FILE *fa = fopen("registros_vet.txt", "a");
  printf("nombre      ||        especie       ||      matricula           ||");

  for (int i = 0; i < max; i++)
  {
    if (reg.status == 1)
    {
      printf("%s ||  %s  ||      %d      ||", reg.nom, reg.especia, reg.matri);
    }
  }
  fclose;
}

vet guardar(vet reg, int max)
{
  FILE *fa = fopen("registros_vet.txt", "W");

  for (int i = 0; i < max; i++)
  {
    if (reg.status == 1)
    {
      scanf("%s,%s,%d,%d", reg.nom, reg.especia, reg.matri, reg.status);
    }
  }
  fclose;
}
