// Nome = André Junges Baratto
// Nº USP = 13731107
// Professor = Jó Ueyama
// Data = 10/05/2022

#include <stdio.h>  //usaremos a biblioteca stdio.h para ler e escrever dados
#include <stdlib.h> //usaremos as bibliotecas stdlib.h e time.h para conseguir gerar valores aleatórios
#include <time.h>

void main(){    //uso o void para não precisar usar o return 0 ao final do código
    int mat[4][4];  //defino uma matriz 4x4

    srand((unsigned) time(NULL));   //esse comando faz com que seja possível gerar valores aleatórios (sinceramente, não sei como ou por quê funciona)

        for(int l=0; l<3; l++){     //neste for, defino os elementos da matriz como valores aleatórios
            for(int c=0; c<4; c++){
                mat[l][c]=rand()%20;
            }
        }

    printf("A matriz montada foi:\n");  //aqui, começo a imprimir a matriz final, que será gerada abaixo

        for(int l=0; l<3; l++){     // aqui, imprimo os valores aleatórios gereados anteriormente
            for(int c=0; c<4; c++){
                printf("%d ", mat[l][c]);
            }

            printf("\n");   //ao final de cada linha da matriz, quebramos a linha para imprimir a próxima
        }

        for(int c=0; c<4; c++){     //aqui, defino os elementos da última linha:
                mat[3][c]=0;    //inicialmente, defino todos os elementos da linha como 0
            for(int l=0; l<3; l++){ //a cada linha, o valor do elemento é incrementado por um valor equivalente aos elementos da coluna
                mat[3][c]+=mat[l][c];
            }
            printf("%d ", mat[3][c]);   //depois que o elemento da última linha é definido, ele é imprimido ao final da matriz, conlcuindo a matriz 4x4
        }
}
