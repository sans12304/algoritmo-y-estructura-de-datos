#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rating(int televidentes) {
    printf("los puntos de rating son: %i\n", televidentes / 10);
}

int main() {
    int codigodecanal = 0, cantidaddetelevidentes = 0, nivelderating = 0, televidentes9 = 0, televidentes11 = 0, televidentes13 = 0, televidentesprime = 0;
    char horario = 0, condicion = 's';
    while (condicion == 's') {
        printf("ingrese el horario: M=manañana T=tarde P=prime time \n");
        scanf(" %c", &horario);
        fflush(stdin);
        printf("ingrese la cantidad de televidentes \n");
        scanf("%i", &cantidaddetelevidentes);
        fflush(stdin);
        printf("ingrese codigo del canal; 9 11 13 \n");
        scanf("%i", &codigodecanal);
        fflush(stdin);
        switch (codigodecanal) {
            case 9:
                televidentes9 = cantidaddetelevidentes + televidentes9;
                break;
            case 11:
                televidentes11 = cantidaddetelevidentes + televidentes11;
                break;
            case 13:
                televidentes13 = cantidaddetelevidentes + televidentes13;
                break;
        }
        if (horario == 'p') {
            televidentesprime = televidentesprime + cantidaddetelevidentes;
        }
        printf("El canal es: %i.\n", codigodecanal);
        rating(cantidaddetelevidentes);
        printf("desea continuar: s para continuar n para terminar \n");
        scanf(" %c", &condicion);
        fflush(stdin);
    }
    return 0;
}