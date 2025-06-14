#include <stdio.h>
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

// Indica cu�ntas cifras tiene el n�mero
void cantidadDeCifras (int n){}

// Verifica si el n�mero es primo o no
void primo_noprimo (int n){}

// Muestra en qu� cifra termina el n�mero (m�nimo 2 cifras)
void terminaEn (int n){}

// Eval�a si el n�mero est� m�s cerca del m�nimo, m�ximo o del centro del rango
void cercaniaRango(int n, int min, int max){}

