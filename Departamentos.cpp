#include <stdio.h>
#include "Departamentos.h"

void cargarD(Departamento &depto){
int numDept;
printf("Ingrese el numero correspondiente a su departamento\n1-ARTIGAS\n2-SALTO\n3-PAYSANDU\n4RIO_NEGRO\n5-SORIANO\n6-COLONIA\n7-RIVERA\n8-TACUAREMBO\n9-DURAZNO\n10-FLORIDA\n11-CANELONES\n12-MONTEVIDEO\n13-CERRO_LARGO\n14-TRINTA_Y_TRES\n15-LAVALLEJA\n16-MALDONADO\n17ROCHA\n18FLORES\n19-SAN_JOSE");
scanf("%d", &numDept);
switch(numDept){
case 1:
    depto = ARTIGAS;
    break;
case 2:
    depto = SALTO;
    break;
case 3:
    depto = PAYSANDU;
    break;
case 4:
    depto = RIO_NEGRO;
    break;
case 5:
    depto = SORIANO;
    break;
case 6:
    depto = COLONIA;
    break;
case 7:
    depto = RIVERA;
    break;
case 8:
    depto = TACUAREMBO;
    break;
case 9:
    depto = DURAZNO;
    break;
case 10:
    depto = FLORIDA;
    break;
case 11:
    depto = CANELONES;
    break;
case 12:
    depto = MONTEVIDEO;
    break;
case 13:
    depto = CERRO_LARGO;
    break;
case 14:
    depto = TREINTA_Y_TRES;
    break;
case 15:
    depto = LAVALLEJA;
    break;
case 16:
    depto = MALDONADO;
    break;
case 17:
    depto = ROCHA;
    break;
case 18:
    depto = FLORES;
    break;
case 19:
    depto = SAN_JOSE;
    break;
default:
    printf("No existen mas de 19 departamentos");
    break;
}

}

void mostrarD(Departamento depto){
switch(depto){
case ARTIGAS:
    printf("Artigas");
    break;
case SALTO:
    printf("Salto");
    break;
case PAYSANDU:
    printf("Paysandu");
    break;
case RIO_NEGRO:
    printf("Rio Negro");
    break;
case SORIANO:
    printf("Soriano");
    break;
case COLONIA:
    printf("Colonia");
    break;
case RIVERA:
    printf("Rivera");
    break;
case TACUAREMBO:
    printf("Tacuarembo");
    break;
case DURAZO:
    printf("Durazno");
    break;
case FLORIDA:
    printf("Florida");
    break;
case CANELONES:
    printf("Canelones");
    break;
case MONTEVIDEO:
    printf("Montevideo");
    break;
case CERRO_LARGO:
    printf("Cerro largo");
    break;
case TREINTA_Y_TRES:
    printf("Treinta Y Tres");
    break;
case LAVALLEJA:
    Printf("Lavalleja");
    break;
case MALDONADO:
    printf("Maldonado");
    break;
case ROCHA:
    printf("Rocha");
    break;
case FLORES:
    printf("Flores");
    break;
case SAN_JOSE:
    printf("San Jose");
    break;
default:
    printf("No existen mas de 19 departamentos");
    break;


}
