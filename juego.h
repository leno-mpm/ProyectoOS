#ifndef JUEG0_H
#define JUEGO_H

#define NUMERO_VIDAS 3
#define NIVEL1_MIN 0
#define NIVEL1_MAX 50
#define NIVEL2_MIN 0
#define NIVEL2_MAX 100
#define NIVEL3_MIN 0
#define NIVEL3_MAX 500

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
