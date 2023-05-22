#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void imprimirResultados(int crating_canal_9, int crating_canal_11, int crating_canal_13, int televidentes_prime_time) {
	printf("El rating del canal 9 fue de: %i \n", crating_canal_9);
	printf("El rating del canal 11 fue de: %i \n", crating_canal_11);
	printf("El rating del canal 13 fue de: %i \n", crating_canal_13);
	printf("La cantidad de televidentes en Prime Time fue de: %i \n", televidentes_prime_time);
}

int main(){
	int codigo_canal, televidentes, puntos_rating;
	int finalizar = 1; // Primer parte
	int televidentes_9 = 0, televidentes_11 = 0, televidentes_13 = 0;
	char horario; // Primer parte
	int crating_canal_9, crating_canal_11, crating_canal_13;
	int rating_canal_9, rating_canal_11, rating_canal_13, televidentes_prime_time; // Segunda Parte

	while(finalizar == 1){
		printf("Ingrese el codigo de canal: \n 9 \n 11 \n 13 \n");
		scanf("%i", &codigo_canal);
		printf("Ingrese el horario: \n M = Mañana \n T = Tarde \n P = Prime Time \n");
		scanf("%c", &horario);
		printf("Ingrese la cantidad de televidentes: ");
		scanf("%i", &televidentes);
		if (codigo_canal == 9){
			televidentes_9=televidentes_9+televidentes;
			rating_canal_9=(televidentes_9/10);
			crating_canal_9=(televidentes_9/10);
			printf("El codigo del canal es: %i \n", codigo_canal);
			printf("Y cuenta con un rating de: %i \n", rating_canal_9);
		}
		if (codigo_canal==11){
			televidentes_11=televidentes_11+televidentes;
			rating_canal_11=(televidentes_11/10);
			crating_canal_11=(televidentes_11/10);
			printf("El codigo del canal es: %i \n", codigo_canal);
			printf("Y cuenta con un rating de: %i \n", rating_canal_11);
		}
		if (codigo_canal==13){
			televidentes_13=televidentes_13+televidentes;
			rating_canal_13=(televidentes_13/10);
			crating_canal_13=(televidentes_13/10);
			printf("El codigo del canal es: %i \n", codigo_canal);
			printf("Y cuenta con un rating de: %i \n", rating_canal_13);
		}
		if (horario =='P'){
			televidentes_prime_time=televidentes_prime_time+televidentes;
		}
		printf("Desea finalizar? \n 1 = No \n 0 = Si \n");
		scanf("%i", &finalizar);
	}
    imprimirResultados(crating_canal_9, crating_canal_11, crating_canal_13, televidentes_prime_time);
}
