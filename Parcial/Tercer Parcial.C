#include <stdio.h>
#include <stdlib.h>

int departamentos[50];
int vecinos_con_problemas[50];
int monto_expensas_adeudadas[50];
int monto_multas_adeudadas[50];

void carga_datos (int numero, int vecinos, float expensas, float multas);
void evaluacion_departamentos(int dep[], int vec[], int exp[], int mul[]);

int main(){
	int numero_departamento = 0, vecinos_conflicto = 0, expensas_adeudadas = 0, multas_adeudadas = 0, conflictivo = 0;
	int opcion = 0;

	while (opcion != 3){
		printf("- - - Administracion de departamentos - - - \n");
		printf("Elija una opcion: \n1. Ingresar datos de departamentos\n2. Evaluacion de departamentos\n3. Salir\n");
		scanf("%i", &opcion);
        fflush(stdin);
		switch (opcion){
            case 1:
                carga_datos(numero_departamento, vecinos_conflicto, expensas_adeudadas, multas_adeudadas);
                printf("Registro completado, regresando al menu.\n");
                opcion = 0;
                break;
            case 2:
                evaluacion_departamentos(departamentos, vecinos_con_problemas, monto_expensas_adeudadas, monto_multas_adeudadas);
                break;
            case 3:
                printf("Cerrando el programa. \nHasta luego");
                return 0;
        }
	}
}

void carga_datos (int numero, int vecinos, float expensas, float multas){
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("Ingrese el numero del departamento: \n");
        scanf("%i", &numero);
        fflush(stdin);
        while (numero <= 0){
            printf("Ingrese un numero de departamento valido: \n");
            scanf("%i", &numero);
            fflush(stdin);
        };
        departamentos[i] = numero;
        
        printf("Ingrese la cantidad de vecinos con los que el propietario tiene problemas:\n");
        scanf("%i", &vecinos);
        fflush(stdin);
        while (vecinos<0){
            printf("Ingrese un valor valido (Valor mayor a 0):\n");
            scanf("%i", &vecinos);
            fflush(stdin);
        };
        vecinos_con_problemas[i] = vecinos;
        
        printf("Ingrese la cantidad expensas que adeuda el propietario (Ingrese 0 si no adeuda ninguna expensa):\n");
        scanf("%f", &expensas);
        fflush(stdin);
        while (expensas<0){
            printf("Ingrese un valor valido (Valor mayor o igual a 0):\n");
            scanf("%f", &expensas);
            fflush(stdin);
        };
        monto_expensas_adeudadas[i] = expensas;

        printf("Ingrese la cantidad de multas que adeuda el propietario (Ingrese 0 si no adeuda ninguna multa):\n");
        scanf("%f", &multas);
        while (multas<0){
            printf("Ingrese un valor valido (Valor mayor o igual a 0):\n");
            scanf("%f", &multas);
            fflush(stdin);
        };
        monto_multas_adeudadas[i] = multas;
    }
}

void evaluacion_departamentos(int dep[], int vec[], int exp[], int mul[]){
    int i;
    for (i = 0; i < 50; i++){
    float deudas_totales = exp[i]+mul[i];
    printf("El numero de departamento es el: %i\n", dep[i]);
    printf("Las deudas totales de este departamento son de: $%2.f.\n", deudas_totales);
    }
}