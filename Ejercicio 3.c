#include <stdio.h>
#include <stdlib.h>

main(){
int varones, mujeres;
printf("Ingrese la cantidad de ni�os \n");
scanf("%i", &varones);
printf("Ingrese la cantidad de ni�as \n");
scanf("%i", &mujeres);
if ((varones+mujeres)>40)
printf("Curso numeroso");
if ((varones+mujeres)<40)
printf("El total a pagar es: %i", ((varones+mujeres)*55));
}
