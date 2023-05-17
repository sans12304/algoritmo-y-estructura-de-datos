#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int potencial_desarrollo(int, int, int);
void mostrar_cartel(int, int);

main(){
int cod, cantidad_dias, dia, f1, f2, f3, resultado;
int cont_fuera_nivel=0;
int ban=1; int maxdias, maxcod;
char profesional[3];
char continuar[3]={"si"};
float calif_prom;
while(strcmp("SI", continuar)==0){
    printf("\t\t\n Ingrese el codigo del empleado: ");
    fflush(stdin);
    scanf("%d", &cod);
    printf("\t\t\n Ingrese la cantidad de dias trabajados: ");
    fflush(stdin);
    scanf("%d", &cantidad_dias);
    printf("\t\t\n Ingrese si es un profesional o no (SI/NO): ");
    fflush(stdin);
    scanf("%s", &profesional);
    printf("\t\t\n Ingrese la Cantidad y Calidad del trabajo: ");
    fflush(stdin);
    scanf("%d", &f1);
    printf("\t\t\n Ingrese la  Cooperacion: ");
    fflush(stdin);
    scanf("%d", &f2);
}
if (strcmp(profesional=="SI")==0){
    printf("\t\t\n Ingrese capacidad de analisis y creatividad: ");
    fflush(stdin);
    scanf("%d", &f3);
    resultado=potencial_desarrollo(f1,f2,f3);
    mostrar_cartel(cod, resultado);
    calif_prom=(f1+f2+f3)/3;
    if (calif_prom<3)
        {cont_fuera_nivel++};
    }
    if (ban==1){
        maxdias=cantidad_dias;
        maxcod=cod;
        ban=0;
    }
    else if (cantidad_dias>maxdias){
        maxdias=cantidad_dias;
        maxcod=cod;
    }
    system("pause");
    system("cls");
    printf("\t\t\n Desea continuar? (SI/NO): ");
    fflush(stdin);
    gets(continuar);
    system("cls");
}