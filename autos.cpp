#include <stdio.h>
#include "autos.h"
void cargarAuto(autos &aut){
printf("Ingrese la marca del vehiculo: \n");
scan(aut.marca);
printf("Ingrese el anio de fabricacion: \n");
scanf("%d", aut.aniofab);
}

void mostrarAuto(autos &aut){
print(aut.marca);
printf("%d", aut.aniofab);
}
