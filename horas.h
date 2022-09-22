#ifndef HORAS_H_INCLUDED
#define HORAS_H_INCLUDED
typedef struct
{int hrs;
int minutos;
}horas;

void cargar (horas &hrs);

void mostrar (horas hrs);

#endif // HORAS_H_INCLUDED
