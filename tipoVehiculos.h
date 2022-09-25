#ifndef TIPOVEHICULOS_H_INCLUDED
#define TIPOVEHICULOS_H_INCLUDED
#include "boolean.h"

typedef enum {automovil, camioneta}tipovehiculos;

void cargarTipo (tipovehiculos &tv);

void mostrarTipo (tipovehiculos tv);
#endif // TIPOVEHICULOS_H_INCLUDED
