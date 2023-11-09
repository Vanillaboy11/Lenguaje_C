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
  // Inicializar el inventario vacío
  int inv[MAX] = {0};
  int cont = 0;

  int choice;
  int item;

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
            // Mover los elementos restantes hacia adelante
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

}
