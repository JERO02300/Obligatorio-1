#ifndef ARREGLOCONTOPE_H_INCLUDED
#define ARREGLOCONTOPE_H_INCLUDED

#include "vehiculos.h"
int N = 50;
typedef struct
{
vehiculo arre[N];
int tope;
} Arreglocontope;

void cantidadAutos(Arreglocontope arre3);
void cantidadCamionetas(Arreglocontope arre3);

void cargar (Arreglocontope &arretope);
void quitarVehiculo(Arreglocontope &arreCT, string matr);

void MostrarListado (Arreglocontope arretope);
void mostrarHVehiculo (Arreglocontope arretope);


#endif // ARREGLOCONTOPE_H_INCLUDED
