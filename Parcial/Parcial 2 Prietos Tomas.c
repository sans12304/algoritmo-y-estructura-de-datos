#include <stdio.h>
char patente[8];
void monto_multa (int velocidad_vehiculo){
	printf("La patente del vehiculo es: %s \n", patente);
	if (velocidad_vehiculo > 40 , velocidad_vehiculo <= 45){
		printf("El monto de la multa es de: $5000");
	}
	if (velocidad_vehiculo > 45, velocidad_vehiculo <= 60){
		printf("El monto de la multa es de: $8000");
	}
	if (velocidad_vehiculo > 60){
		printf("El monto de la multa es de: $15000");
	}
}
void reporte (int tradar1, int tradar2, int tradar3, int tradar4, int tmultas){
	printf("El radar 1 realizo %i multas \n", tradar1);
	printf("El radar 2 realizo %i multas \n", tradar2);
	printf("El radar 3 realizo %i multas \n", tradar3);
	printf("El radar 4 realizo %i multas \n", tradar4);
	printf("El total de multas realizadas es: %i  \n", tmultas);
}
int main(){
	int numero_radar = 0, tmultas = 0, tradar_1 = 0, tradar_2 = 0, tradar_3 = 0, tradar_4 = 0, velocidad_vehiculo = 0;
	int continuar = 1;
	while(continuar==1){
		printf("Ingrese numero de radar: ");
		scanf("%i", &numero_radar);
		while (numero_radar < 1 | numero_radar>4){
			printf("Ingrese un numero de radar valido: \n");
			scanf("%i", &numero_radar);
		}
		printf("\n Ingrese la patente: ");
		scanf("%s", &patente);
		printf("\n Insgrese la velocida del vehiculo en Km/h: ");
		scanf("%i", &velocidad_vehiculo);
		while (velocidad_vehiculo < 40) {
		printf("Ingrese un valor valido. (Valor mayor a 40 km/h) \n");
		scanf("%i", &velocidad_vehiculo);
		}
		if (numero_radar == 1) {
			tradar_1 =+ 1;
		}
		if (numero_radar == 2) {
			tradar_2 =+ 1;
		}
		if (numero_radar == 3) {
			tradar_3 =+ 1;
		}
		if (numero_radar == 4) {
			tradar_4 =+ 1;
		}
		tmultas = (tmultas+1);
	monto_multa(velocidad_vehiculo);
	printf("\n Desea continuar? \n 1 - Si \n 2 - No \n");
	scanf("%i", &continuar);
	}
	reporte(tradar_1, tradar_2, tradar_3, tradar_4, tmultas);
	system("pause");
	return 0;
}
