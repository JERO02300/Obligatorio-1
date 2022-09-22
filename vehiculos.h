#ifndef VEHICULOS_H_INCLUDED
#define VEHICULOS_H_INCLUDED
#include "string.h"
#include "horas.h"
#include "tipoVehiculos.h"
typedef struct

{ string matricula;
departamento dep;
long int cedula;
horas hrsIngreso;

 tipovehículos discriminante;

union
{
    camioneta  datosc;
    autos datosa;
} datos;
} vehículo;


#endif // VEHICULOS_H_INCLUDED
