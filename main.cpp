/*Hacer un menú que considere las siguientes opciones:

Caso 1: Ingreso del vehiculo
caso 2: Salida del vehiculo
Caso 3: Mostrar menu de consulta y listado
caso 4: salir. */

#include<iostream>
#include<stdio.h>
#include "MenuDeConsultas.h"

using namespace std;

int main(){

 int opcion;
vehiculo v;

 printf("Bienvenido, Ingrese una opcion\n");
 printf("1.Ingreso del vehiculo\n");
  printf("2.Salida el vehiculo\n");
 printf ("3.Mostrar menu de consulta y listado\n");
 printf ("4.salir\n");


 switch(opcion){
  case 1:
cargarVehiculo(v);

    break;
     case 2:

        break;
     case 3:

         break;

     case 4:

        break;

     default: printf("error, la opcion q usted selecciono no existe");
         break;
 }

 printf("Messi");


 return 0;
}
