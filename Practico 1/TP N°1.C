
#include <stdio.h>
#include <string.h>
float calcularPrecioTotal(float precios[], int cantidad) {
    float total = 0;
    for (int i = 0; i < cantidad; i++) {
        total += precios[i];
    }
    return total;
}
void mostrarInfoProducto(char nombre[], float precio) {
    printf("Producto: %s\n", nombre);
    printf("Precio: %.2f\n", precio);
}
int main(){
    int opcion;
    int cantidad_productos = 0;
    char nombre_producto[50];
    float precios[50];
    while (1) {
        printf("=-=-=-=-=-=-= Supermercado =-=-=-=-=-=-=\n");
        printf("1. Agregar producto\n");
        printf("2. Mostrar información de todos los productos\n");
        printf("3. Calcular precio total\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese el nombre del producto: ");
                scanf(" %[^\n]s", nombre_producto);
                printf("Ingrese el precio del producto: ");
                scanf("%f", &precios[cantidad_productos]);
                cantidad_productos++;
                printf("Producto agregado con éxito.\n\n");
                break;
            case 2:
                printf("=-=-=-=-=-=-= Información de los productos =-=-=-=-=-=-=\n");
                for (int i = 0; i < cantidad_productos;){
                    mostrarInfoProducto(nombre_producto, precios[i]);
                    i++;
                }
                printf("\n");
                break;
            case 3:
                printf("El precio total de los productos es: %.2f\n\n", calcularPrecioTotal(precios, cantidad_productos));
                break;
            case 4:
                printf("Gracias por utilizar nuestra tienda. ¡Hasta luego!\n");
                return 0;
            default:
                printf("Opción inválida. Por favor, ingrese un número válido.\n\n");
        }
    }
    return 0;
}
