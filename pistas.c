#include <stdio.h>
#include <math.h>
#include "pistas.h"


//Indica si el intento actual es mayor, menor al n�mero secreto
void mayor_menor(int secreto, int intento){
	if(secreto < intento){
		printf("El numero es menor a %d\n", intento);
	}
	if(secreto > intento){
		printf("El numero es mayor a %d\n", intento);
	}

}

// Informa si el n�mero es par o impar
void par_impar (int n) {
	if(n % 2 == 0){
		printf("El numero es par\n");
	}else{
		printf("El numero es impar\n");
	}
}

// Verifica si el n�mero es divisible para un n�mero elegido aleatoriamente
void divisible (int n, int ndiv){
	if(n % ndiv == 0){
		printf("El numero es divisible para %d\n", ndiv);
	}else{
		printf("El numero no es divisible para %d\n", ndiv);
	}
}

// Verifica si el n�mero es m�ltiplo de un n�mero elegido aleatoriamente
void multiplo (int n, int nmult){
	if(n % nmult == 0){
		printf("El numero es multiplo de %d\n", nmult);
	}else{
		printf("El numero no es multiplo de %d\n", nmult);
	}
}

// Calcula la suma de los d�gitos del n�mero (m�nimo 2 cifras)
void sumaDigito (int n){
	int numero = n;
	int sum = 0;
	while(numero > 0){
		sum = sum + (numero % 10);
		numero = numero / 10;
	}
	
	printf("La suma de sus digitos da %d\n", sum);
}

// Indica cuántas cifras tiene el número, se valida que el int n, como mínimo sean de dos cifras
void cantidadDeCifras (int n){
	int cont=0;
	while(n!=0){
		cont++;
		n=n/10;
	}
	printf("Pista - La cantidad de cifras que tiene tu numero es: %d\n", cont);
}

// Verifica si el número es primo o no
void primo_noprimo (int n){
	if(n<=1){
		printf("Pista - El número no es primo\n");
	}else if(n==2){
		printf("Pista - El número es primo\n");
	}
	else if(n%2==0){
		printf("Pista - El número no es primo\n");
	}else{
		int limite= (int) sqrt((double)n);
		int i=3;
		for(i; i<=limite; i+=2){
			if(n%i==0){
				printf("Pista - El número no es primo\n");
				return;
			}
		}
		printf("Pista - El número es primo\n");
	}
}

// Muestra en qué cifra termina el número (mínimo 2 cifras)
void terminaEn (int n){
	printf("Pista - El número termina en %d\n",n%10);
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

