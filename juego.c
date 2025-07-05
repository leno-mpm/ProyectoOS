#include<stdio.h>
#include<stdbool.h>
#include "juego.h"
#include "pistas.h"

unsigned int seed = 12345;

// Inicia el juego según el nivel seleccionado, gestiona intentos y pide pistas.
bool jugar (int max){
	int secretNumber;
	int tamanio = 8;
	int intento = -1;
	int arreglo[] = {1,3,4,5,6,7,8,9};
	
	do{
		secretNumber = generarNumeroAleatorio(max, 0);
	}while(secretNumber == 0);
	
	if (secreto < 10) {
        eliminarPista(5);
        eliminarPista(8);
    }
    
	par_impar(secretNumber);
	printf("Escribe tu respuesta: ");
	scanf("%d",&intento);
	
	while(secretNumber != intento && tamanio !=0){
		mostrarPista(secretNumber, max, &tamanio, arreglo, intento);
		if(tamanio==0){
			printf("Este es tu �ltimo intento!\n")
		}
		printf("Escribe tu respuesta: ");
		scanf("%d",&intento);
	}
	
	if(secretNumber == intento){
		return true;
	}else{
		return false;
	}
}

// Genera un número aleatorio dentro del rango definido para el juego
int generarNumeroAleatorio (int max, int secretNumber){
	seed = seed + secretNumber;
	seed = ((1664525 * seed + 1013904223) % 4294967296) % max;
	return seed;
}


// Muestra una pista aleatoria relacionada al número secreto
void mostrarPista (int secretNumber, int max, int *tamanio, int arreglo[], int intento){
	int n = numeroPista(arreglo, tamanio);
	int aleatorio = generarNumeroAleatorio(max, secretNumber);
	switch(n){
		case 1:
			mayor_menor(secretNumber, intento);//
			break;
		case 3:
			divisible(secretNumber, 2);
			break;
		case 4:
			multiplo(secretNumber, aleatorio);//
			break;
		case 5:
			sumaDigito(secretNumber);//
			break;
		case 6:
			cantidadDeCifras(secretNumber);//
			break;
		case 7:
			primo_noprimo(secretNumber);//
			break;
		case 8:
			terminaEn(secretNumber);//
			break;
		case 9:
			cercaniaRango(secretNumber, 0, max);//
			break;
	}
}

int numeroPista(int arreglo[], int *tamanio){
	//RANDOM n (0-10)
	int n;
	int i;
	int encuentra = 0;
	//si lo encuentra, vuelve a buscar uno que no este
	n = generarNumeroAleatorio(*tamanio, 0);
	return eliminarElemento(arreglo, tamanio,n);
}
	

//Eliminar elementos de un arreglo
int eliminarElemento(int arreglo[], int *tamanio, int posicion) {
    if (posicion >= 0 || posicion < *tamanio) {
        int eliminado = arreglo[posicion];


	    for (int i = posicion; i < *tamanio - 1; i++) {
	        arreglo[i] = arreglo[i + 1];
	    }
	
	    (*tamanio)--;
	    return eliminado;
    }
    return -1;
}


//Mensaje de felicitaciones por ser ganador
void mensajeGanador(){
	printf("Felicidades, ¡HAZ GANADO!\n");
}

//Mensaje de que ha pérdido
void mensajePerdedor(){
	printf("Lástima, ¡INTÉNTALO OTRA VEZ!\n");
}




