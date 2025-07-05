#include <stdio.h>
#include "pistas.h"

void mostrarMayorMenor(int secreto, int intento) {
    if (intento > secreto)
        printf("El n�mero es menor que %d\n", intento);
    else
        printf("El n�mero es mayor que %d\n", intento);
}

void mostrarParImpar(int n) {
    if (n % 2 == 0)
        printf("El n�mero es par\n");
    else
        printf("El n�mero es impar\n");
}

void mostrarDivisible(int n, int div) {
    if (n % div == 0)
        printf("El n�mero es divisible por %d\n", div);
    else
        printf("No es divisible por %d\n", div);
}

void mostrarMultiplo(int n, int mult) {
    if (mult != 0 && n % mult == 0)
        printf("El n�mero es m�ltiplo de %d\n", mult);
    else
        printf("No es m�ltiplo de %d\n", mult);
}

void mostrarSumaDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    printf("La suma de los d�gitos es: %d\n", suma);
}

void mostrarCantidadCifras(int n) {
    int count = 0;
    do {
        count++;
        n /= 10;
    } while (n > 0);
    printf("Cantidad de cifras: %d\n", count);
}

void mostrarPrimo(int n) {
    if (n <= 1) {
        printf("No es primo\n");
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("No es primo\n");
            return;
        }
    }
    printf("Es primo\n");
}

void mostrarUltimoDigito(int n) {
    printf("El n�mero termina en %d\n", n % 10);
}

void mostrarCercaniaRango(int n, int min, int max) {
    int cuarto = (max - min) / 4;
    if (n <= min + cuarto)
        printf("Cerca del m�nimo\n");
    else if (n >= max - cuarto)
        printf("Cerca del m�ximo\n");
    else
        printf("Cerca del centro del rango\n");
}
