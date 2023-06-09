// Alumnos:
// Farfaglia Juan Pablo, Vieta Gonzalo, Prietos Tomas
// Registro de gastos personales.

#include <stdio.h>
#include <string.h>

float calculargastos(float precios[], int cantidad) {
    float total = 0;
    for (int i = 0; i < cantidad;) {
        total += precios[i];
        i++;
    }
    return total;
}
void MostrarGastos(char nombre[], float precio) {
    printf("Producto: %s\n", nombre);
    printf("Precio: %.2f\n", precio);
}

int main(){
    int opcion = 0;
    int cantidad_productos = 0;
    char nombre_gasto[50];
    float precios[50];
    while (opcion != 4) {
        printf("- - - - - Control de Gastos - - - - -\n");
        printf("1. Agregar Gasto\n");
        printf("2. Mostrar Todos los gastos\n");
        printf("3. Calcular total\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese el nombre del producto: ");
                scanf(" %[^\n]s", nombre_gasto);
                printf("Ingrese el precio del producto: ");
                scanf("%f", &precios[cantidad_productos]);
                cantidad_productos++;
                printf("Producto agregado con éxito.\n\n");
                break;
            case 2:
                printf("- - - - - Información de los gastos - - - - -\n");
                for (int i = 0; i < cantidad_productos;){
                    MostrarGastos(nombre_gasto, precios[i]);
                    i++;
                }
                printf("\n");
                break;
            case 3:
                printf("El total de los gastos es: %.2f\n\n", calculargastos(precios, cantidad_productos));
                break;
            case 4:
                printf("Gracias por utilizar nuestra servicio.\n");
                return 0;
            default:
                printf("Opción inválida. Por favor, ingrese un número válido.\n\n");
        }
    }
    return 0;
}
