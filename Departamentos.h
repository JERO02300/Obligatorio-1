#ifndef DEPARTAMENTOS_H_INCLUDED
#define DEPARTAMENTOS_H_INCLUDED

typedef enum {ARTIGAS, SALTO, PAYSANDU, RIO_NEGRO, SORIANO,
COLONIA, RIVERA, TACUAREMBO, DURAZNO,
FLORIDA, CANELONES, MONTEVIDEO, CERRO_LARGO,
TREINTA_Y_TRES, LAVALLEJA, MALDONADO, ROCHA, FLORES,
SAN_JOSE
} Departamento;


void cargarD(Departamento &depto);

void mostrarD(Departamento depto);


#endif // DEPARTAMENTOS_H_INCLUDED
