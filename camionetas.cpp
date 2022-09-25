#include <stdio.h>
#include "camionetas.h"

void cargarCam (camioneta &camio){
printf ("Ingresar el modelo: \n");
scan(camio.modelo);
printf("Ingresar la capacidad de carga");
scanf("%d", camio.capacidadcarga);
}

void mostrarCam(camioneta &camio){
print(camio.modelo);
printf("%d", camio.capacidadcarga);
}
