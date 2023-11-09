#include <stdio.h>
#include "archivo.h"

void externa(void);

int main()
{
  variableExterna = 0;

  externa();

  printf("Valor final: %d\n", variableExterna);
}

