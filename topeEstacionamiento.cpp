#include <stdio.h>
#include "topeEstacionamiento.h"

int cobro(vehiculo v, hora h) {
    int aux;
    int total;
aux = (h.hrs*60+h.minutos)-(v.hrsIngreso.hrs*60+v.hrsIngreso.minutos);

    if(aux %60 == 0){
    total = (aux / 60) * 100;

    }
    else if(aux == 0)
        total = 60;
else
    total = (aux / 60) * 100 + 60;


    return total;
}


