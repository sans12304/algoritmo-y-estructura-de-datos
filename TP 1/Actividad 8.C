#include <stdio.h>
#include <stdlib.h>

float monto_en_pesos;
float precio_dolar = 15.40;

main()
{
    printf("Ingrese el monto en pesos: \n");
    scanf("%f", &monto_en_pesos);
    printf("El monto ingresado equivale a %f dolares", monto_en_pesos / precio_dolar);
    return 0;
}
