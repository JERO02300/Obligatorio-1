#ifndef CAMIONETAS_H_INCLUDED
#define CAMIONETAS_H_INCLUDED
#include "tipoVehiculos.h"
typedef struct
 {
string modelo;
int capacidadcarga;
} camioneta;  //CAMIONETA

void cargar(camioneta &camio);

void cargar(camioneta camio);


#endif // CAMIONETAS_H_INCLUDED
