#include <stdio.h>
#include "pistas.h"

void mostrarMayorMenor(int secreto, int intento) {
    if (intento > secreto)
        printf("El número es menor que %d\n", intento);
    else
        printf("El número es mayor que %d\n", intento);
}

void mostrarParImpar(int n) {
    if (n % 2 == 0)
        printf("El número es par\n");
    else
        printf("El número es impar\n");
}

void mostrarDivisible(int n, int div) {
    if (n % div == 0)
        printf("El número es divisible por %d\n", div);
    else
        printf("No es divisible por %d\n", div);
}

void mostrarMultiplo(int n, int mult) {
    if (mult != 0 && n % mult == 0)
        printf("El número es múltiplo de %d\n", mult);
    else
        printf("No es múltiplo de %d\n", mult);
}

void mostrarSumaDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    printf("La suma de los dígitos es: %d\n", suma);
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
    printf("El número termina en %d\n", n % 10);
}

void mostrarCercaniaRango(int n, int min, int max) {
    int cuarto = (max - min) / 4;
    if (n <= min + cuarto)
        printf("Cerca del mínimo\n");
    else if (n >= max - cuarto)
        printf("Cerca del máximo\n");
    else
        printf("Cerca del centro del rango\n");
}
