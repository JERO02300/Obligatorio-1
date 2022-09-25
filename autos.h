#ifndef AUTOS_H_INCLUDED
#define AUTOS_H_INCLUDED
#include "string.h"

typedef struct {
    string marca;
    int aniofab;
    }autos;  // AUTOS

    void cargarAuto (autos &aut);

    void mostrarAuto (autos aut);



#endif // AUTOS_H_INCLUDED
