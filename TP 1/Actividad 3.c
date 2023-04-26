#include <stdio.h>
#include <stdlib.h>

int numero_A, numero_B;

int main()
{
    //Ingreso de datos
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero_A);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero_B);
    
    //Operaciones a>b
    printf("\n El resultado de la suma es A+B: %d", numero_A + numero_B);
    printf("\nEl resultado de la resta es: %d", numero_A - numero_B);
    printf("\nEl resultado de la multiplicacion es: %d", numero_A * numero_B);
    printf("\nEl resultado de la division es: %d", numero_A / numero_B);
    
    //Operaciones b>a
    printf("\nEl resultado de la suma es: %d", numero_B + numero_A);
    printf("\nEl resultado de la resta es: %d", numero_B - numero_A);
    printf("\nEl resultado de la multiplicacion es: %d", numero_B * numero_A);
    printf("\nEl resultado de la division es: %d", numero_B / numero_A);

    system("pause");
    return 0;
}