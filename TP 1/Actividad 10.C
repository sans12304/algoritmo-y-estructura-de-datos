#include <stdlib.h>
#include <stdio.h>

float cateto1;
float cateto2;

main(){
    printf("Introdusca el primer cateto: \n");
    scanf("%f", &cateto1);
    printf("Introdusca el segundo cateto: \n");
    scanf("%f", &cateto2);
    printf("La hipotenusa del triangulo es: %f\n", sqrt(cateto1 * cateto1 + cateto2 * cateto2));
    return 0;
}
