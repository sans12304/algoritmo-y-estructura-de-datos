#include <stdlib.h>
#include <stdio.h>

int numeroA
int numeroB

main(){
    //Ingreso de Datos
    printf("Ingrese el primer numero: ");
    scanf("%i", &numeroA);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &numeroB);

    //Reporte de Datos
    printf("El resultado del calculo (A+B)*(A-B) es: %i", (numeroA+numeroB)*(numeroA-numeroB));
}