#ifndef COLAS_H
#define COLAS_H
typedef int Dato;

#define Cola struct _cola
#define C_Cola struct _cola *

typedef struct _cola {
    Dato *dato_cola;
    int fin;
    int inicio;
    int salida;
}Cola1;

void iniciar_cola(C_Cola c);

void formar_cola(C_Cola c,Dato d);

Dato salida_cola(C_Cola c);

void ver_datos(C_Cola c);


#endif /* COLAS_H */

