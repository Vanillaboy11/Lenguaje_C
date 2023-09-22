#include <limits.h>
#include <stdio.h>
#define MAX 10

void menu()
{
  printf("\n--- Menu de Inventario ---\n");
  printf("1. Agregar elemento al inventario\n");
  printf("2. Retirar elemento del inventario\n");
  printf("3. Mostrar inventario\n");
  printf("4. Salir\n");
  printf("Seleccione una opcion: ");
}

int main()
{
  int num;
  int opt;
  int cal;
  char letra;

  // Inicializar el inventario vacío
  int inv[MAX] = {0};
  int cont = 0;

  int choice;
  int item;

  printf("Bienvenido, ingrese una opcion: \t1. numeros binarios \t2. Calificaciones por letra \t3. Sistema de inventario\t");
  scanf("%d", &opt);

  switch (opt)
  {
  case 1:
  {
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    // validacion positiva

    if (num < 0)
    {
      return 1;
    }

    // calcular bits necesarios

    int n_bits = 0;
    int temp = num;

    while (temp > 0)
    {
      temp /= 2;
      n_bits++;
    }

    // crear arreglo

    int bits[n_bits];
    int indice;

    while (num > 0)
    {
      bits[indice] = num % 2;
      num /= 2;
      indice++;
    }

    // imprimir la cadena de bits

    printf("Numero de bits: ");

    for (int i = indice - 1; i >= 0; i--)
    {
      printf("%d", bits[i]);
    }
    printf("\n");

    // buscar la cantidad de bits encendidos

    int bit_on = -1;

    for (int i = 0; i < indice; i++)
    {
      if (bits[i] == 1)
      {
        bit_on = i;
        printf("Bit encendido en posicion: %d ", bit_on + 1);
      }
    }

    if (bit_on == -1)
    {
      printf("No se encontraron bits encendidos");
    }
    break;
  }
  case 2:
  {
    printf("Ingrese una calificacion de 0 - 100: ");
    scanf("%d", &cal);

    letra = (cal >= 90) ? 'A' : (cal >= 80) ? 'B' : (cal >= 70)   ? 'C' : (cal >= 60)   ? 'D' : 'F';
    printf("La calificacion %d es: %c.", cal, letra);
    break;
  }
  case 3:
  {
    while (1)
    {
      menu();
      scanf("%d", &choice);

      switch (choice)
      {
      case 1:
        if (cont < MAX)
        {
          printf("Ingrese el elemento a agregar: ");
          scanf("%d", &item);
          inv[cont] = item;
          cont++;
          printf("Elemento agregado al inventario.\n");
        }
        else
        {
          printf("Inventario esta lleno\n");
        }
        break;

      case 2:
        if (cont > 0)
        {
          printf("Ingrese el elemento a retirar: ");
          scanf("%d", &item);
          int found = 0;
          for (int i = 0; i < cont; i++)
          {
            if (inv[i] == item)
            {
              for (int j = i; j < cont - 1; j++)
              {
                inv[j] = inv[j + 1];
              }
              cont--;
              found = 1;
              printf("Elemento retirado del inventario.\n");
              break;
            }
          }
          if (!found)
          {
            printf("Ellemento no encontrado\n");
          }
        }
        else
        {
          printf("Inventario esta vacio\n");
        }
        break;

      case 3:
        if (cont > 0)
        {
          printf("Inventario actual:\n");
          for (int i = 0; i < cont; i++)
          {
            printf("%d ", inv[i]);
          }
          printf("\n");
        }
        else
        {
          printf("Inventario esta vacio\n");
        }
        break;

      case 4:
        printf("Saliendo del programa.\n");
        return 0;

      default:
        printf("Opcion no valida\n");
        break;
      }
    }

    break;
  }

  default:
    break;
  }
}
