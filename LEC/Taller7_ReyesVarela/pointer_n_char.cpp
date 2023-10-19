#include <stdio.h>
#include <string.h>

void invertirCadena(char *cad);

int main()
{
  char string[] = "hola";
  invertirCadena(string);
}

void invertirCadena(char *cad)
{
  int j = strlen(cad) - 1;
  int i = 0;
  char temp;
  while (i < j)
  {
    temp = cad[i];
    cad[i] = cad[j];
    cad[j] = temp;
    i++;
    j--;
  }
  printf("%s", cad);
}