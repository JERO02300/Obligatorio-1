#ifndef CAMIONETAS_H_INCLUDED
#define CAMIONETAS_H_INCLUDED
#include <stdin.h>
#include "tipoVehiculos.h"
typedef struct
 {
string modelo;
int capacidadcarga;
} camioneta;  //CAMIONETA

void cargarCam(camioneta &camio);

void mostrarCam(camioneta camio);


#endif // CAMIONETAS_H_INCLUDED
