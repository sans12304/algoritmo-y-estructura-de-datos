#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float cateto1;
float cateto2;

main(){
    printf("Introdusca el primer cateto: \n");
    scanf("%f", &cateto1);
    printf("Introdusca el segundo cateto: \n");
    scanf("%f", &cateto2);
    printf("La hipotenusa del triangulo es: %f\n" , sqrt(pow(cateto1,2)+pow(cateto2,2)));

    system("pause");
    return(0);
}