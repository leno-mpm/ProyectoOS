#include <stdio.h>
#include <math.h>
#include "pistas.h"


//Indica si el intento actual es mayor, menor al número secreto
void mayor_menor(int secreto, int intento){}

// Informa si el número es par o impar
void par_impar (int n) {}

// Verifica si el número es divisible para un número elegido aleatoriamente
void divisible (int n, int ndiv){}

// Verifica si el número es múltiplo de un número elegido aleatoriamente
void multiplo (int n, int nmult){}

// Calcula la suma de los dígitos del número (mínimo 2 cifras)
void sumaDigito (int n){}

// Indica cuántas cifras tiene el número, se valida que el int n, como mínimo sean de dos cifras
void cantidadDeCifras (int n){
	int cont=0;
	while(n!=0){
		cont++;
		n=n/10;
	}
	printf("Pista - La cantidad de cifras que tiene tu numero es: %d" + cont);
}

// Verifica si el número es primo o no
void primo_noprimo (int n){
	if(n<=1){
		printf("Pista - El número no es primo");
	}else if(n==2){
		printf("Pista - El número es primo");
	}
	else if(n%2==0){
		printf("Pista - El número no es primo");
	}else{
		int limite= (int) sqrt((double)n);
		int i=3;
		for(i; i<=limite; i+=2){
			if(n%i==0){
				printf("Pista - El número no es primo");
				return;
			}
		}
		printf("Pista - El número es primo");
	}
}

// Muestra en qué cifra termina el número (mínimo 2 cifras)
void terminaEn (int n)}{
	printf("Pista - El número termina en %d",n%10);
}

// Evalúa si el número está más cerca del mínimo, máximo o del centro del rango
void cercaniaRango(int n, int min, int max){
	int cuarto = (max - min) / 4;
	if (n <= min + cuarto) {
		printf("El número se encuentra más cerca del mínimo\n");
	} else if (n >= max - cuarto) {
		printf("El número se encuentra más cerca del máximo\n");
	} else {
		printf("El número se encuentra cerca del centro del rango\n");
	}
}
