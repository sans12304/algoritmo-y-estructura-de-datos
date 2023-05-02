#include <stdio.h>
#include <stdlib.h>

int monto_en_pesos;
int precio_dolar = 15.40;

main()
{
    printf("Ingrese el monto en pesos: \n");
    scanf("%i", &monto_en_pesos);
    printf("El monto ingresado equivale a %d dolares", monto_en_pesos/precio_dolar);
    return 0;
}
