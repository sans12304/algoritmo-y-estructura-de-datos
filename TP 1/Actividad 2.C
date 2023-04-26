#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numA;
int numB;
int numC;

int main(){
    //Ingreso de Datos
    printf("Ingrese el primer numero:\n");
    scanf("%i", &numA);
    printf("Ingrese el segundo numero:\n");
    scanf("%i", &numB);
    printf("Ingrese el tercer numero:\n");
    scanf("%i", &numC);

    //Reporte de Datos
    printf("La suma de los 3 numeros es: %i", numA + numB + numC);
    system("PAUSE");
    return(0)
;}