#include <stdio.h>
#include <stdlib.h>

void store_shot(int x, int y, int x_array[], int y_array[], int index);
void evaluate_shots(int x_array[], int y_array[], int index);

int main(){
    int coordenada_x, coordenada_y, opcion = 0;
    int x_array[50], y_array[50], index = 0;

    while (opcion >= 0)
    {
        printf("--- MENU --- \n");
        printf("Seleccione alguna de las opciones \n");
        printf("1 - Ingresar datos de tiro al Arco \n2 - Evaluar las habilidades del arquero robot \n3 - Salir\n");
        scanf("%i", &opcion);
        switch (opcion){
            case 1:
                printf("Ingrese los siguientes datos: \nCordenadas X: ");
                scanf("%i", &coordenada_x);
                printf("\nCordenadas Y: \n");
                scanf("%i", &coordenada_y);
                store_shot(coordenada_x, coordenada_y, x_array, y_array, index);
                index++;
                break;
            case 2:
                evaluate_shots(x_array, y_array, index);
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

void store_shot(int x, int y, int x_array[], int y_array[], int index){
    *(x_array + index) = x;
    *(y_array + index) = y;
}

void evaluate_shots(int x_array[], int y_array[], int index){
    int gol_count = 0, afuera_count = 0;
    for (int i = 0; i < index; i++){
        printf("Tiro %d: Coordenadas (%d, %d) - ", i+1, *(x_array + i), *(y_array + i));
        if (*(x_array + i) >= 0 && *(x_array + i) <= 500 && *(y_array + i) >= 0 && *(y_array + i) <= 250){
            printf("GOL\n");
            gol_count++;
        } else {
            printf("AFUERA\n");
            afuera_count++;
        }
    }
    printf("Cantidad de tiros que resultaron GOL: %d\n", gol_count);
    printf("Cantidad de tiros que fueron AFUERA: %d\n", afuera_count);
}