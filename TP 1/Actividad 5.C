#include <stdio.h>
#include <stdlib.h>

int numero_base
int numero_exponente

main(){
    printf("Ingrese el numero base: ");
    scanf("%i", &numero_base);
    printf("Ingrese el numero exponente: ");
    scanf("%i", &numero_exponente);
    printf("El resultado del calculo es: %i", pow(numero_base, numero_exponente));
}