#include <stdio.h>

//movimento do bispo na diagonal (uma vez para cima, uma vez para direita) com função recursiva e loop aninhado confome pede no desafio

void movimento_bispo(int movimento){   

if (movimento > 0)
{
    for (int i = 0; i < 1; i++)  //move uma vez para a direita
    {
        for (int j = 0; j < 1; j++) //move uma vez para cima
        {
           printf("cima\n");
        }
        
        printf("direita\n");
    }
     movimento_bispo(movimento - 1);
}

}

//movimento da torre com função recursiva (direia)

void movimento_torre(int movimento){

    if(movimento > 0){

        printf("direita.\n");

          movimento_torre(movimento - 1);
    }
}

//movimento da rainha com função recursiva (esquerda)

void movimento_rainha(int movimento){

    if (movimento > 0)
    {
        printf("esquerda.\n");

        movimento_rainha(movimento - 1);
    }
    
}

//movimento do cavalo com função recursiva e loop aninhado (cima, cima, direita)

void movimento_cavalo(int movimento){

    if (movimento > 0)
    {
        for (int i = 0; i < movimento; i++) //move uma vez para direita
        {
           for (int j = 0; j < 2; j++) //move duas vezes para cima
           {
            printf("cima.\n");
           }
           printf("direita.\n");
        
           movimento_cavalo(movimento - 1);
        }
       
    }
    

}
        

int main(){

int bispo = 5; //quantidade de vezes que o bispo vai se mover

int torre = 5; //quantidade de vezes que oa torre vai se mover

int rainha = 8; //quantidade de vezes que a rainha vai se mover

int cavalo = 1; //quantidade de vezes que o cavalo vai se mover

printf("bispo:\n\n"); 
movimento_bispo(bispo); //executa o movimento do bispo

printf("\n");

printf("torre:\n\n"); 
movimento_torre(torre); //executa o movimento da torre

printf("\n");

printf("rainha:\n\n"); 
movimento_rainha(rainha); //executa o movimento da rainha

printf("\n");

printf("cavalo\n\n");
movimento_cavalo(cavalo); //executa o movimento da torre

}
