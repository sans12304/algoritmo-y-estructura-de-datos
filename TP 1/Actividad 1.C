#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nombre[20];
char apellido[20];
int telefono;
int edad;

int main(){
    //Ingreso de Datos
    printf("Ingrese su nombre:\n");
    scanf("%s", &nombre);
    printf("Ingrese su apellido:\n");
    scanf("%s", &apellido);
    printf("Ingrese su numero de telefono\n");
    scanf("%i", &telefono);
    printf("Ingrese su edad\n");
    scanf("%i", &edad);
    
    //Reporte de Datos
    printf("Su nombre es: %s", nombre);
    printf("\nSu apellido es: %s", apellido);
    printf("\nSu numero de telefono es: %i", telefono);
    printf("\nSu edad es: %i", edad);

    //Finalizacion del Codigo    
    system("pause");
    return 0;
}
