#include <stdio.h>
#include <stdlib.h>

main(){
    //Declaracion de variables
    int tipo_operacion, codigo_cajero;
    float dolares, euros;
    char moneda;

    //Valores de Variables
    dolares = 100000;
    euros = 100000;

    printf("Ingrese el codigo del cajero: ");
    scanf("%d", &codigo_cajero);
    while (codigo_cajero != 0){
    printf("Ingrese la moneda: ");
    scanf("%c", &moneda);
    if (moneda == a)
        printf("Solicite al cliente que realice esta operacion por cajero automatico")
    else
        printf("Ingrese el tipo de operacion: ");
        scanf("%d", &tipo_operacion);
        if tipo_operacion == 1
            printf("Ingrese el importe: ");
            scanf("%f", &importe);
            if moneda == b
                dolares = dolares + importe;
            else
                euros = euros + importe;
        else
            printf("Ingrese el importe: ");
            scanf("%f", &importe);
            if moneda == b
                if dolares >= importe
                    dolares = dolares - importe;
                else
                    printf("Solicite al cliente que realice esta operacion con otro cajero");
            else
                if euros >= importe
                    euros = euros - importe;
                else
                    printf("Solicite al cliente que realice esta operacion con otro cajero");
    printf("El total en las cajas es de: %f dolares y %f euros", dolares, euros);
    printf("Ingrese el codigo del cajero: ");
    scanf("%d", &codigo_cajero);
    }
}