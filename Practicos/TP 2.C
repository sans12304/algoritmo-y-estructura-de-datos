#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTOS 100
#define MAX_NOMBRE 50

// Estructura para almacenar la información de un producto
typedef struct {
    char nombre[MAX_NOMBRE];
    float precio;
} Producto;

// Función para ingresar los datos de un producto
void ingresarProducto(Producto* producto) {
    printf("Ingrese el nombre del producto: ");
    fgets(producto->nombre, MAX_NOMBRE, stdin);
    producto->nombre[strcspn(producto->nombre, "\n")] = '\0'; // Eliminar el salto de línea al final del nombre

    printf("Ingrese el precio del producto: ");
    scanf("%f", &(producto->precio));
    getchar(); // Limpiar el buffer del teclado
}

// Función para mostrar la información de un producto
void mostrarInfoProducto(const Producto* producto) {
    printf("Nombre: %s\n", producto->nombre);
    printf("Precio: %.2f\n", producto->precio);
}

// Función para calcular el precio total de los productos
float calcularPrecioTotal(const Producto productos[], int cantidad_productos) {
    float precio_total = 0.0;
    for (int i = 0; i < cantidad_productos; i++) {
        precio_total += productos[i].precio;
    }
    return precio_total;
}

int main() {
    Producto productos[MAX_PRODUCTOS];
    int cantidad_productos = 0;

    printf("Bienvenido al sistema de gestión de productos\n");

    while (1) {
        printf("\nMenú:\n");
        printf("1. Ingresar producto\n");
        printf("2. Mostrar información de productos\n");
        printf("3. Calcular precio total de los productos\n");
        printf("4. Salir\n");
        printf("Ingrese su opción: ");

        int opcion;
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer del teclado

        switch (opcion) {
            case 1:
                if (cantidad_productos < MAX_PRODUCTOS) {
                    ingresarProducto(&productos[cantidad_productos]);
                    cantidad_productos++;
                    printf("Producto ingresado exitosamente.\n");
                } else {
                    printf("No se pueden ingresar más productos. Límite alcanzado.\n");
                }
                break;
            case 2:
                printf("=-=-=-=-=-=-= Información de los productos =-=-=-=-=-=-=\n");
                for (int i = 0; i < cantidad_productos; i++) {
                    mostrarInfoProducto(&productos[i]);
                    printf("\n");
                }
                break;
            case 3:
                printf("El precio total de los productos es: %.2f\n\n", calcularPrecioTotal(productos, cantidad_productos));
                break;
            case 4:
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción inválida. Por favor, ingrese una opción válida.\n");
                break;
        }
    }

    return 0;
}
