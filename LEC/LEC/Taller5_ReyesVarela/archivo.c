#include <stdio.h>

// declaracion de la variable

int variableExterna;

// funciones de modificacion de variable


void diminish(int amount)
{
  variableExterna -= amount;
}

void plus(int amount)
{
  variableExterna += amount;
}