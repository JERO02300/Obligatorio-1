#ifndef HORAS_H_INCLUDED
#define HORAS_H_INCLUDED
#include "boolean.h"
typedef struct
{int hrs;
int minutos;
}horas;

boolean horaValida(hora hs);
void cargarH(horas horario);

void mostrarH (horas horario);

#endif // HORAS_H_INCLUDED
