#include <stdio.h>
#include "juego.h"
#include "pistas.h"

int seed = 12345;

// Lista de pistas disponibles (global)
int pistas_disponibles[8];
int pistas_size = 8;

// Reinicia las pistas para cada nivel
void reiniciarPistas() {
    int pistas_iniciales[] = {1, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 8; i++) {
        pistas_disponibles[i] = pistas_iniciales[i];
    }
    pistas_size = 8;
}

// Juega un nivel completo
int jugar(int max) {
    int secreto, intento = -1;

    reiniciarPistas();

    // Genera un número secreto distinto de 0
    do {
        secreto = generarNumeroAleatorio(max, 0);
    } while (secreto == 0);

    // Si el número tiene solo una cifra, eliminamos pistas no aplicables
    if (secreto < 10) {
        eliminarPista(5); // sumaDigitos
        eliminarPista(8); // terminaEn
    }

    mostrarParImpar(secreto);

    printf("Escribe tu respuesta: ");
    scanf("%d", &intento);

    // Mientras no acierte y queden pistas
    while (intento != secreto && pistas_size > 0) {
        mostrarPista(secreto, max, intento);
        printf("Escribe tu respuesta: ");
        scanf("%d", &intento);
    }

    // Si usó todas las pistas y aún no adivina, le damos un intento final
    if (intento != secreto && pistas_size == 0) {
        printf("Último intento sin pista...\n");
        printf("Escribe tu respuesta final: ");
        scanf("%d", &intento);
    }

    return (intento == secreto) ? 1 : 0;
}

// Genera un número pseudoaleatorio en el rango [1, max)
int generarNumeroAleatorio(int max, int offset) {
    seed += offset;
    seed = ((1664525 * seed + 1013904223) % 4294967296) % max;
    return (seed == 0) ? 1 : seed;
}

// Muestra una pista aleatoria
void mostrarPista(int secreto, int max, int intento) {
    int index = generarNumeroAleatorio(pistas_size, 0);
    int tipo = eliminarPistaPorIndice(index);
    int aleatorio = generarNumeroAleatorio(max, secreto);

    if (tipo == 1) mostrarMayorMenor(secreto, intento);
    else if (tipo == 3) mostrarDivisible(secreto, 2);
    else if (tipo == 4) mostrarMultiplo(secreto, aleatorio);
    else if (tipo == 5) mostrarSumaDigitos(secreto);
    else if (tipo == 6) mostrarCantidadCifras(secreto);
    else if (tipo == 7) mostrarPrimo(secreto);
    else if (tipo == 8) mostrarUltimoDigito(secreto);
    else if (tipo == 9) mostrarCercaniaRango(secreto, 1, max);
}

// Elimina una pista por su valor (ej. pista 5 o 8 si el número < 10)
void eliminarPista(int valor) {
    for (int i = 0; i < pistas_size; i++) {
        if (pistas_disponibles[i] == valor) {
            for (int j = i; j < pistas_size - 1; j++) {
                pistas_disponibles[j] = pistas_disponibles[j + 1];
            }
            pistas_size--;
            break;
        }
    }
}

// Elimina una pista por índice aleatorio y devuelve su valor
int eliminarPistaPorIndice(int index) {
    int valor = pistas_disponibles[index];
    for (int i = index; i < pistas_size - 1; i++) {
        pistas_disponibles[i] = pistas_disponibles[i + 1];
    }
    pistas_size--;
    return valor;
}

