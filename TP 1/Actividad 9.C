#include <stdlib.h>
#include <stdio.h>

float radio;
float altura;

int main()
{
    printf("Introdusca el radio del cilindro: \n");
    scanf("%f", &radio);
    printf("Introdusca la altura del cilindro: \n");
    scanf("%f", &altura);
    printf("El area del cilindro es: %f\n", 2 * 3.1416 * radio * (radio + altura));
    printf("Y el volumen del mismo es: %f\n", 3.1416 * radio * radio * altura);

    return 0;
}
