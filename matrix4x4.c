// Nome = Andr� Junges Baratto
// N� USP = 13731107
// Professor = J� Ueyama
// Data = 10/05/2022

#include <stdio.h>  //usaremos a biblioteca stdio.h para ler e escrever dados
#include <stdlib.h> //usaremos as bibliotecas stdlib.h e time.h para conseguir gerar valores aleat�rios
#include <time.h>

void main(){    //uso o void para n�o precisar usar o return 0 ao final do c�digo
    int mat[4][4];  //defino uma matriz 4x4

    srand((unsigned) time(NULL));   //esse comando faz com que seja poss�vel gerar valores aleat�rios (sinceramente, n�o sei como ou por qu� funciona)

        for(int l=0; l<3; l++){     //neste for, defino os elementos da matriz como valores aleat�rios
            for(int c=0; c<4; c++){
                mat[l][c]=rand()%20;
            }
        }

    printf("A matriz montada foi:\n");  //aqui, come�o a imprimir a matriz final, que ser� gerada abaixo

        for(int l=0; l<3; l++){     // aqui, imprimo os valores aleat�rios gereados anteriormente
            for(int c=0; c<4; c++){
                printf("%d ", mat[l][c]);
            }

            printf("\n");   //ao final de cada linha da matriz, quebramos a linha para imprimir a pr�xima
        }

        for(int c=0; c<4; c++){     //aqui, defino os elementos da �ltima linha:
                mat[3][c]=0;    //inicialmente, defino todos os elementos da linha como 0
            for(int l=0; l<3; l++){ //a cada linha, o valor do elemento � incrementado por um valor equivalente aos elementos da coluna
                mat[3][c]+=mat[l][c];
            }
            printf("%d ", mat[3][c]);   //depois que o elemento da �ltima linha � definido, ele � imprimido ao final da matriz, conlcuindo a matriz 4x4
        }
}
