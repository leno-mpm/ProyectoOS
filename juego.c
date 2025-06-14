#include<stdio.h>
#include "juego.h"

int vidasUsadas=1;

// Inicia el juego según el nivel seleccionado, gestiona intentos y pide pistas.
void jugar (int nivel);

// Genera un número aleatorio dentro del rango definido para el juego
int generarNumeroAleatorio ();

// Muestra una pista aleatoria relacionada al número secreto
void mostrarPista (int secretNumber);

//Mensaje de felicitaciones por ser ganador
void mensajeGanador();

//Mensaje de que ha pérdido
void mensajePerdedor();


#endif
