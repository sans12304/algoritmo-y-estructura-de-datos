#include <stdio.h>
#include <math.h>

float cateto1, cateto2, respuesta;

int main(){
    printf("Introdusca el primer cateto: \n");
    scanf("%f", &cateto1);
    printf("Introdusca el segundo cateto: \n");
    scanf("%f", &cateto2);
    respuesta = pow(cateto1, 2)+pow(cateto2, 2);
    printf("La hipotenusa del triangulo es: %f \n", sqrtf(respuesta));

    system("pause");
    return(0);
}