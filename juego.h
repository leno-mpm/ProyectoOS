#ifndef JUEG0_H
#define JUEGO_H

#include<stdbool.h>
#define NIVEL1_MAX 50
#define NIVEL2_MAX 100
#define NIVEL3_MAX 500


int jugar(int max);
int generarNumeroAleatorio(int max, int offset);
void mostrarPista(int secreto, int max, int intento);
void eliminarPista(int valor);
int eliminarPistaPorIndice(int index);


#endif
