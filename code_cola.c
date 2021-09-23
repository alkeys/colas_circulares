#include <stdio.h>
#include <stdlib.h>
#include "colas.h"
#include <stdbool.h>
int n = 3;

void iniciar_cola(C_Cola c)
{
    Dato *aux = (Dato *)malloc(n * sizeof(Dato));
    for (int i = 0; i < n; i++)
    {
        aux[i] = 0;
    }

    (*c).dato_cola = aux;
    (*c).inicio = 0;
    (*c).salida = 0;
    (*c).fin = n;
}

void formar_cola(C_Cola c, Dato d){
    int index = (*c).inicio;
    bool verda = false;
    for (int i = 0; i < n; i++)
    {
        if ((*c).dato_cola[i] == 0)
        {
            verda = true;
            break;
        }
    }

    if (index == n && verda)
    {
        (*c).inicio = 0;
        index = (*c).inicio;
        if ((*c).dato_cola[index] == 0)
        {
            (*c).dato_cola[index] = d;
            (*c).inicio = (*c).inicio + 1;
        }
    }
    else
    {
        if (verda)
        {
            (*c).dato_cola[index] = d;
            (*c).inicio = (*c).inicio + 1;
        }
    }
}

Dato salida_cola(C_Cola c)
{
    int pos_salida = (*c).salida;
    if (pos_salida != n)
    {
        Dato salir = (*c).dato_cola[pos_salida];
        (*c).dato_cola[pos_salida] = 0; //se pondra en cero para mas facilidad para ver que esta vacia
        (*c).salida = (*c).salida + 1;
    }
    else
    {
        (*c).salida = 0;
        pos_salida = (*c).salida;
        (*c).dato_cola[pos_salida] = 0; //se pondra en cero para mas facilidad para ver que esta vacia
        (*c).salida = (*c).salida + 1;
    }
}


void ver_datos(C_Cola c){
  for (int  i = 0; i < n; i++)
  {
      printf ("%d  ",(*c).dato_cola[i]);
  }
  
}