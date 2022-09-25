#include <stdio.h>
#include "horas.h"

boolean horaValida(hora hs) {
    boolean valida=FALSE;
        if (hs.hrs>8 && hs.hrs<22){
            valida=TRUE;
        }

    return valida;
}

horas cargarH(horas horario){
printf("Ingrese el horario de ingreso del vehiculo en sistema de 24 horas:\n");
      scanf("%d %d", &horario.hrs, &horario.minutos);

      return hrs;
}

void mostrarH(horas horario){
        printf("%d:%d", horario.hrs, horario.minutos);
}
