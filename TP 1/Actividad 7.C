#include <stdio.h>
#include <stdlib.h>

int monto_en_pesos;

main(){
    printf("Ingrese el monto en pesos: ");
    scanf("%d", &monto_en_pesos);
    printf("El %80 del monto ingresado es: %d \n", monto_en_pesos*(0.80));
    printf("El %20 del monto ingresado es: %d \n", monto_en_pesos*(0.20));
    printf("El %15 del monto ingresado es: %d \n", monto_en_pesos*(0.15));
    system("pause");
    return(0);
}