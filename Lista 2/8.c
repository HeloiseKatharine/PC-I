/*Crie um programa em C que realize uma transposição de uma matriz de
caracteres de tamanho 3x5. A transposição de uma matriz transforma as
linhas de uma matriz em colunas na matriz transposta. Por fim, exiba a matriz
transposta.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define L 3
#define C 5

void transposta(char matriz[L][C])
{
    matriz[C][L];
    int i, j;

    for(i=0; i<C; i++)
    {
        for(j=0; j<L; j++)
        {
            matriz[i][j] == matriz[j][i];
        }
    }

    for(i=0; i<C; i++)
    {
        for(j=0; j<L; j++)
        {
            printf("%c ", matriz[j][i]);
        }
        puts("");
    }
}

int main()
{
    int i,j;
    char matriz[L][C];

    puts("Digite os caracteres da matriz:");

    for(i=0; i<L; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("[%d][%d]: ",i,j);
            scanf("%c", &matriz[i][j]);
            getchar();
        }
        puts("");
    }

    transposta(matriz);

    return 0;
}
