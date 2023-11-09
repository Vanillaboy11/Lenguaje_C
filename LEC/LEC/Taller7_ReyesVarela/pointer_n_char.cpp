// pointer_n_char.cpp
// Autor: Salvador Isaac Reyes Varela
// oct/20/2023
// Realizar funciones basicas utilizando punteros

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void impriFalso(void);
void registrarNombres(void);
void imprimirNombres(char *arr[], int n_nombres);
void invertirCadena(char *cad);
void ordenarPalabras(char *arr[], int n_pala);

int main()
{
  char string[] = "hola";
  char *nombres[3];
  int n_word;
  int i;
  impriFalso();
  printf("\n");
  registrarNombres();
  printf("\n");

  for (int i = 0; i < 3; i++)
  {
    nombres[i] = new char[100];
    printf("Ingrese el nombre %d: ", i + 1);
    scanf("%s", nombres[i]);
  }

  imprimirNombres(nombres, 3);
  printf("\n");
  invertirCadena(string);
  printf("\n");

  printf("Ingrese la cantidad de palabras: ");
  scanf("%d", &n_word);
  fflush(stdin);

  char *word[n_word];

  for (i = 0; i < n_word; i++)
  {
    printf("Ingrese la palabra %d: ", i + 1);
    char input[100];
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; 
    word[i] = (char *)malloc(strlen(input) + 1);
    strcpy(word[i], input);
  }
  ordenarPalabras(word, n_word);
  printf("Palabras ordenadas alfabéticamente:\n");
  for (int i = 0; i < n_word; i++)
  {
    printf("%s\n", word[i]);
    free(word[i]);
  }
}

void impriFalso(void)
{
  int i;
  const char *nombres[] = {"isaac", "antonio", "linda"};
  int size = sizeof(nombres) / sizeof(nombres[0]);
  for (i = 0; i < size; i++)
  {
    printf("%s\t", nombres[i]);
    nombres[i]++;
  }
  printf("\n");
}

void registrarNombres(void)
{
  char *nombres[3];
  int i;
  for (i = 0; i < 3; i++)
  {
    printf("Ingrese el nombre[%d]: ", i);
    nombres[i] = new char[100];
    fflush(stdin);
    gets(nombres[i]);
  }

  for (i = 0; i < 3; i++)
  {
    printf("Nombres: %s\t", nombres[i]);
  }
}

void imprimirNombres(char *arr[], int n_nombres)
{
  int i;
  for (i = 0; i < n_nombres; i++)
  {
    printf("Nombre %d: %s\n", i + 1, arr[i]);
  }
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

void ordenarPalabras(char *arr[], int n_pala)
{
  int i, j;
  char *temp;
  for (i = 0; i < n_pala - 1; i++)
  {
    for (j = i + 1; j < n_pala; j++)
    {
      if (strcmp(arr[i], arr[j]) > 0)
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}