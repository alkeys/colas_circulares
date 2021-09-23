#include <stdio.h>
#include <stdlib.h>
#include "colas.h"

int main(int argc, char** argv) {
    Cola cola_circular;
    iniciar_cola(&cola_circular);
    formar_cola(&cola_circular,1);
    formar_cola(&cola_circular,2);
    formar_cola(&cola_circular,3);
    salida_cola(&cola_circular);
    formar_cola(&cola_circular,5);
    salida_cola(&cola_circular);
    ver_datos(&cola_circular);
   
    return (EXIT_SUCCESS);
}

