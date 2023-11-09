// Clases_de_Almacenamiento.cpp
// Autor: Salvador Isaac Reyes Varela
// sep/26/2023
// Juego de loteria y carrera de coches con variables estaticas, automaticas y de registro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int msgs(void);
void menu(void);
int generarNumeroLoteria(void);
void iniciarCarrera(void);
void mayor(int v1, int v2, int v3);

static int numeroGanador = 0;

int main()
{
  menu();

  return 0;
}

int msges()
{
  int op;
  system("CLS");
  printf("   M  E   N   U \n");
  printf("1.- Juego de loteria \n");
  printf("2.- Carrera de coches \n");
  printf("0.- SALIR  \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}

void menu()
{
  int op;
  op = msges();
  switch (op)
  {
  case 1:
    printf("Bienvenido!!\n\n");
    int lote, numeroGanador;

    lote = rand() % 100 + 1;
    numeroGanador = generarNumeroLoteria();

    printf("Su numero de loteria es: %d\n\n", lote);
    printf("Y EL NUMERO GANADOR ES...\n");
    system("pause");

    if (lote == numeroGanador)
    {
      printf("Felicidades, ganaste la loteria!.");
    }
    else
    {
      printf("Lo siento, no ganaste esta vez.");
    }
    break;
  case 2:
    iniciarCarrera();
    break;
  }
}

int generarNumeroLoteria(void)
{

  if (numeroGanador == 0)
  {
    srand(time(NULL));
    numeroGanador = (rand() % 100) + 1;
  }

  return numeroGanador;
}

void iniciarCarrera(void)
{
  register float v1;
  register float v2;
  register float v3;

  float f_time1, f_time2, f_time3;

  srand(time(NULL));
  v1 = 100 + (rand() % 101);
  v2 = 100 + (rand() % 101);
  v3 = 100 + (rand() % 101);

  f_time1 = 1000 / (v1 * 0.27);
  f_time2 = 1000 / (v2 * 0.27);
  f_time3 = 1000 / (v3 * 0.27);

  printf("RESULTADOS DE LA CARRERA (1000 METROS)\n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf(" CORREDOR    ||          VELOCIDAD            ||        TIEMPO            ||\n");
  printf("  TESLA      ||           %.2f km/h         ||         %.2fs           ||\n", v1, f_time1);
  printf("  EDISON     ||           %.2f km/h         ||         %.2fs           ||\n", v2, f_time2);
  printf("  HAN SOLO   ||           %.2f km/h         ||         %.2fs           ||\n", v3, f_time3);

  printf("\nEL GANADOR DE LA CARRERA ES...\n");
  mayor(v1, v2, v3);
}

void mayor(int v1, int v2, int v3)
{

  if (v1 > v2 && v1 > v3)
  {
    printf("El corredor TESLA es el ganador.\n");
  }
  else
  {
    if (v2 > v1 && v2 > v3)
    {
      printf("El corredor EDISON es el ganador.\n");
    }
    else
    {
      if (v3 > v1 && v3 > v2)
      {
        printf("El corredor HAN SOLO es el ganador.\n");
      }
    }
  }
}