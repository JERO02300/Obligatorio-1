#ifndef VEHICULOS_H_INCLUDED
#define VEHICULOS_H_INCLUDED
#include "string.h"
#include "horas.h"
#include "tipoVehiculos.h"
#include "Departamentos.h"
#include "autos.h"
#include "camionetas.h"

typedef struct {
    string matricula;
    departamento dep;
    long int cedula;
    horas hrsIngreso;
    tipovehiculos discriminante;
    union {
        camioneta  datosc;
        autos datosa;
    } datos;
} vehiculo;

void cargarVehiculo(vehiculo &v);

void mostrarVehiculo(vehiculo v);
#endif // VEHICULOS_H_INCLUDED
