#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int Operando_1;
    int Operando_2;
    char Continuar, Operacion;
    Continuar = 's';
    
    while (Continuar == "s")
    printf("Ingrese el primer operando: \n");
    scanf("%i", &Operando_1);
    printf("Ingrese el segundo operando: \n");
    scanf("%i", &Operando_2);
    printf("Ingrese el tipo de operacion que desea realizar: \n")
    printf("Suma: + o M \n Resta: - o R \n Multiplicacion: * o X \n Division: / o D");
    scanf("%c", &Operacion);
    if (Operacion == S || Operacion == s || Operacion == + || Operacion == M){
        printf("El resultado de la suma es: %i", Operando_1 + Operando_2);
    }
    else if (Operacion == R || Operacion == r || Operacion == -){
        printf("El resultado de la resta es: %i", Operando_1 - Operando_2);
    }
    else if (Operacion == X || Operacion == x || Operacion == *){
        printf("El resultado de la multiplicacion es: %i", Operando_1 * Operando_2);
    }
    else if (Operacion == D || Operacion == d || Operacion == /){
        printf("El resultado de la division es: %i", Operando_1 / Operando_2);
    }
    else{
        printf("La operacion ingresada no es valida");
    }
    
}