#include <stdlib.h>
#include <stdio.h>

int numero_uno;
int numero_dos;
int numero_tres;

main(){
    //Ingreso de datos
    printf("Ingrese el primer numero: ");
    scanf("%i", &numero_uno);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &numero_dos);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &numero_tres);
    
    //Mitad del numero
    printf("La mitad del primer numero es: %i\n", numero_uno/2);
    printf("La mitad del segundo numero es: %i \n", numero_dos/2);
    printf("La mitad del tercer numero es: %i \n" ,numero_tres/2);
    
    //Doble del numero
    printf("El doble del primer numero es: %i\n", numero_uno*2);
    printf("El doble del segundo numero es: %i \n", numero_dos*2);
    printf("El doble del tercer numero es: %i \n" ,numero_tres*2);

    //Triple del numero
    printf("El triple del primer numero es: %i\n", numero_uno*3);
    printf("El triple del segundo numero es: %i \n", numero_dos*3);
    printf("El triple del tercer numero es: %i \n" ,numero_tres*3);

    system("pause");
    return(0);
}