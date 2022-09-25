#include <stdio.h>
#include "arreglocontope.h"

void quitarVehiculo(Arreglocontope &arreCT, string matr){
    int i = 0;
    boolean encontre = FALSE;
        while(encontre == FALSE) {
            if(streq(arreCT.arre[i].matricula,  matr))
                encontre = TRUE;
            else
                i++;
        }
        for (i;i<arreCT.tope;i++)
            arreCT.arre[i] = arreCT.arre[i+1];
    arreCT.tope--;
}

int cantidadAutos(Arreglocontope arre3){
    int i=0;
    int cantidadAUTO;
    for(i=0;i<arre3.tope;i++){
        if(arre3.arre[i]==automovil){
            cantidadAUTO++;
        }
    }

    return cantidadAUTO;
}

void cantidadCamionetas(Arreglocontope arre3){
    int i=0;
    int cantidadCAMIO;
    for(i=0;i<arre3.tope;i++){
        if(arre3.arre[i]==camioneta){
            cantidadCAMIO++;
        }

    }
    return cantidadCAMIO;
}
