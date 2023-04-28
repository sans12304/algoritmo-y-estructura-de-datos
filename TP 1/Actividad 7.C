#include <stdio.h>
#include <stdlib.h>

int monto_en_pesos;

main(){
    printf("Ingrese el monto en pesos: ");
    scanf("%d", &monto_en_pesos);
    printf("El 80 porciento del monto ingresado es: %f \n", monto_en_pesos*0.8);
    printf("El 20 porciento del monto ingresado es: %f \n", monto_en_pesos*0.2);
    printf("El 15 porciento del monto ingresado es: %f \n", monto_en_pesos*0.15);
    system("pause");
    return(0);
}