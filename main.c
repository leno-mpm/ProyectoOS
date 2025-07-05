#include <stdio.h>
#include<stdbool.h>
#include "juego.h"
int main(){
    int nivel = 1;
	bool victoria = true;
    
    while(nivel<=3 && victoria){
        if (nivel == 1){
	    	printf("Bienvenido al nivel 1!!!\n Rango del numero a adivinar [0-50]\n");
            victoria = jugar(NIVEL1_MAX);
        }else if(nivel == 2){
            printf("Bienvenido al nivel 2!!!\nRango del numero a adivinar [0-100]\n");
	    	victoria = jugar(NIVEL2_MAX);
		}else if (nivel == 3){
	    	printf("Bienvenido al nivel 3!!!\nRango del numero a adivinar [0-500]\n");
            victoria = jugar(NIVEL3_MAX);
		}
		
		if(victoria){
			printf("¡Pasaste el nivel %d! \n", nivel);
			nivel++;
		}
    } 
    
    if (victoria){
        mensajeGanador();
    }else{
        mensajePerdedor();
    }
    
    return 0;
}

