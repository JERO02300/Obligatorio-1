#ifndef TIPOVEHICULOS_H_INCLUDED
#define TIPOVEHICULOS_H_INCLUDED
#include "boolean.h"
typedef enum {automovil, camioneta}tipovehiculos;

void cargar (tipovehiculos &tvehiculos);

void mostrar(tipovehiculos tvehiculos);
#endif // TIPOVEHICULOS_H_INCLUDED
