#include <stdio.h>
#include<stdbool.h>

int main(){
    int nivel = 1;
    bool victoria = true;
    do
    {
        if (nivel == 1){
            victoria = jugar (NIVEL1_MIN, NIVEL1_MAX);
        }else if(nivel == 2){
            victoria = jugar (NIVEL2_MIN, NIVEL2_MAX);
        }else if (nivel == 3){
            victoria = jugar (NIVEL3_MIN, NIVEL3_MAX);
        }
        nivel++;
    } while (nivel != 4 && victoria);
    
    if (victoria){
        mensajeGanador();
    }else{
        mensajePerdedor();
    }
    
    return 0;
}

