#include <stdio.h>

// declaracion de la variable externa usando cabecera

#include "archivo.h"

//prototipo de funcion
void plus(int amount);
void diminish(int amount);

int main()
{
  variableExterna = 0;


  plus(10);
  diminish(40);

  printf("archivo_extra.c - valor final: %d\n", variableExterna);

  return 0;
}