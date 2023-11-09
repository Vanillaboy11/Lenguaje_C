#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void imprimirVectorPtr(char *words[], int n);
void imprimirVector(char vector[][20], int n);
void imprimirMatriz(char *matriz[][3], int m, int n);

int main()
{
  clock_t start, end;
  srand(time(NULL));
  int i, k, n;
  double tiempo1 = 0, tiempo2 = 0, tiempo3 = 0, tiempo4 = 0, tiempo5 = 0;

  const int n = 4; // Numero de palabras en el vector / filas
  const int m = 3; // Numero de columnas

  char *words[] = {
      "Apple", "Banana", "Cherry", "Date"};

  char vectorWords[][20] = {
      "Apple", "Banana", "Cherry", "Date"};

  char *b[][3] = {
      {"Apple", "Banana", "Cherry"},
      {"Date", "Elephant", "Fox"},
      {"Giraffe", "Horse", "Ice Cream"},
      {"Jellyfish", "Kangaroo", "Lion"}};

  imprimirVectorPtr(words, n);

  imprimirVector(vectorWords, n);

  imprimirMatriz(b, m, n);
  return 0;
}

void imprimirVectorPtr(char *words[], int n)
{
  printf("El vector de palabras es:\n");
  char **wordPtr = words;

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", *wordPtr);
    wordPtr++;
  }
  printf("\n");
}

void imprimirVector(char vector[][20], int n)
{
  int i;
  printf("")
      printf("El vector de palabras es:\n");
  for (i = 0; i < n; i++)
  {
    printf("%s\t", vector[i * n]);
  }
  printf("\n");
}

void imprimirMatriz(char *matriz[][3], int m, int n)
{
  int i, j;
  printf("El vector de palabras es:\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("%s\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}