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

 tipoveh�culos discriminante;

union
{
    camioneta  datosc;
    autos datosa;
} datos;
} veh�culo;


#endif // VEHICULOS_H_INCLUDED
