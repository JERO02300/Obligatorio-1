#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED
#include "tipoVehiculos.h"

typedef struct {
    string marca;
    int aniofab;
    }autos;  // AUTOS

    void cargar (autos &aut);

    void mostrar (autos aut);



#endif // AUTOS_H_INCLUDED
