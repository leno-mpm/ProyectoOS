#include<stdio.h>
#include<stdbool.h>
#include "juego.h"

// Inicia el juego según el nivel seleccionado, gestiona intentos y pide pistas.
bool jugar (int min, int max){}

// Genera un número aleatorio dentro del rango definido para el juego
int generarNumeroAleatorio (int min, int max);


// Muestra una pista aleatoria relacionada al número secreto
void mostrarPista (int secretNumber);
	//int n= numeroPista()

	//switch(n){

	//}
//}

int numeroPista(char arreglo);
	//RANDOM n (0-10)
	//PRIMERO VALIDAR SI EL ARREGLO ESTA LLENO, SI ESTA LLENO MANDAR -1

	//BUSCA SI N ESTA O NO EN EL ARREGLO
	//si lo encuentra, vuelve a buscar uno que no este

	////devuelve un numero que no esre en el arreglo
	//ACTUALIZA EL ARREGLO COMO PISTA UTILIZA

	//return numero;


//Verificar si el número tiene como mínimo 2 cifras (Porque hay pistas que necesitan saber esto antes de ejecutar)
void actualizar(int n, char ARREGLO);
    //    if((n/10)==0){
                ///RELLENA
  //      }
//}


//Mensaje de felicitaciones por ser ganador
void mensajeGanador(){
	printf("Felicidades, ¡HAZ GANADO!\n");
}

//Mensaje de que ha pérdido
void mensajePerdedor(){
	printf("Lástima, ¡INTÉNTALO OTRA VEZ!\n");
}




