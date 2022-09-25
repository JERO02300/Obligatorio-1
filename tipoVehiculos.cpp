#include <stdio.h>
#include "tipoVehiculos.h"

void cargarTipo(tipovehiculos &tv) {
    int vehiculo2
    printf("Seleccione que tipo de vehiculo tiene\n1-auto\n2-camioneta");
    scanf("%d", &vehiculo2);
    switch(vehiculo2){
case 1:
    tv = automovil;
case 2:
    tv = camioneta;
    }
}

void mostrarTipo(tipovehiculos tv){
    switch(tv) {
        case automovil:
            printf("El vehiculo es un auto");
            break;
        case camioneta:
            printf("El vehiculo es una camioneta");
            break;
        default:printf("No existe el vehiculo");
            break;
    }
}
