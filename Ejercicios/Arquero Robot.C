#include <stdio.h>
#include <stdlib.h>

int Cordenada_X, Cordenada_Y, opcion = 0;

int main(){
    while (opcion >= 0)
    {
        printf("--- MENU --- \n");
        printf("Seleccione alguna de las opciones \n");
        printf("1 - Ingresar datos de tiro al Arco \n2 - Evaluar las habilidades del arquero robot \n3 - Salir\n");
        scanf("%i", &opcion);
        switch (opcion){
            case 1:
                printf("Ingrese los siguientes datos: \nCordenadas X: ");
                scanf("%i", &Cordenada_X);
                 printf("\nCordenadas Y: \n");
                scanf("%i", &Cordenada_Y);
                break;
            case 3:
                printf("Hasta luego 👋");
                return 0;
            default:
                printf("Seleccione una opcion valida:\n");
                break;
        }
    }
    return 0;
}


  git config --global user.email "you@example.com"
  git config --global user.name "Your Name"
