// goto.cpp
// Autor: Salvador Isaac Reyes Varela
// sep/12/2023
// Juego de azar para adivinar un numero random

#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{

  inicio: // inicia el juego

  int randnum, num; // esta parte es para el juego de azar, el primero guarda el numero random y el otro es que el usuario ingresala calculadora basica
  int tries = 0, rtry;    // guardara los intentos realizados y el segundo reinicia el juego;

  srand(time(NULL));          // genera la semilla para generar numeros aleatorios
  randnum = rand() % 100 + 1; // genera el numero aleatorio

  printf("Bienvenido!!! \nEl juego consiste en adivinar un numero aleatorio entre 1 y 100\n");

  adivinanza:

  printf("Ingrese un numero postivo entero: \n"); // "inicio" del codigo
  scanf("%d", &num);
  tries++;
  while (num != randnum)
  {
    if (num > randnum)
    {
      printf("Mas bajo \n");
      goto adivinanza;
    }
    if (num < randnum)
    {
      printf("mas alto \n");
      goto adivinanza;
    }
  }

  printf("yey!!!");
  printf("Cantidad de intentos: %d\n", tries);

  printf("Desea continuar?:\n1. Si / 2. No\n"); // Reinicia el juego
  scanf("%d", &rtry);

  reinicio:

  if (rtry == 1)
  {
    goto inicio;
  }
  else
  {
    if (rtry == 2)
    {
      printf("Gracias por jugar");
    }
    else
    {
      printf("ERROR");
      goto reinicio;
    }
  }
  
}