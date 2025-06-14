# **Proyecto: NumGuess Challenge**

NumGuess Challenge es un juego de adivinanza de números desarrollado en C, donde el jugador debe descubrir un número secreto generado aleatoriamente dentro de un rango determinado según el nivel de dificultad seleccionado.

## ✅ Sistema de niveles:

Nivel Fácil (0-50): Pistas directas para principiantes.

Nivel Medio (0-100): Pistas menos obvias, mayor rango.

Nivel Difícil (0-500): Pistas crípticas, máximo desafío.


## ✅ Límite de intentos:

Cada nivel tiene un número máximo de intentos para aumentar la dificultad.


## ✅ Pistas inteligentes:

El juego ofrece ayudas según el nivel, como:

"Mayor/menor que X"

"Estás muy lejos/cerca"

"El número es par/impar"

"Es divisible por 3, 5, etc." (en niveles altos)

## ✅ Estructura

├── main.c            # Contiene la función principal y el flujo del juego

├── juego.h           # Declaraciones de funciones y constantes

├── juego.c           # Implementación de las funciones del juego

├── pistas.h          # Funciones auxiliares (si son necesarias)

├── pistas.c          # Implementación de las funciones del juego

└── Makefile          # Para compilar fácilmentex
