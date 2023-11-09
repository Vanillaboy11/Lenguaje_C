#include<stdio.h>
#include<math.h>

int main()
{
  int i, j, aux=0, calificaciones [10];
  printf("Ingrese sus 10 notas: \n");
  for(i=1; i<=9; i++)
  {
   printf("nota: ",i);
   scanf("%i", &calificaciones[i]);
  }
  for(i=1; i<=9; i++)
  {
    for(j=1; j<=9; j++)
    {
  		if(calificaciones[j]>calificaciones[j+1])
      {
    		aux=calificaciones[j];
  			calificaciones[j]=calificaciones[j+1];
  			calificaciones[j+1]=aux;
		  }
	  }
  }
  for (i=1; i<=9; i++)
   {
	  printf("%i|", calificaciones[i]);
   }
  return 0;
}