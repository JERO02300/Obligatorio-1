#include <stdio.h>
#include "vehiculos.h"

void cargarVehiculo(vehiculo &v){
      printf("Ingrese su matricula:\n");
      scan (v.matricula);                          //vehiculos.h
      printf("Ingrese su departamento:\n");
      cargarD(v.depto);                            //departamento.h
      printf("Ingrese su cedula:\n");
      scanf("%d", &v.cedula);
      cargarH(v.hrsIngreso);
      cargarTipo(tipovehiculos tv);
        if (v.discriminante==automovil)
            cargarAuto(v.datos.datosa);
        else
            cargarCam(v.datos.datosc);
}

void mostrarVehiculo(vehiculo v){
print(v.matricula);
mostrarD(v.dep);
printf("%ld", v.cedula);
mostrarH(v.hrsIngreso);
mostrarTipo(v.discriminante);
if(v.discriminante==automovil){
    mostrarAuto(v.datos.datosa);
}
else
    mostrarCam(v.datos.datosc);
}
