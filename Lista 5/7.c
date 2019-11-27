/*Crie um programa em C que receba uma matriz 5x5 de strings de tamanho
máximo 10 e exiba os elementos da diagonal principal.*/

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int Diagonal_Principal(char Matriz[5][5][10], int i, int j)
{
    if(i>4 && j>4)
    {
        return 0;
    }
    else
    {
        printf("%s ",Matriz[i][j]);
        Diagonal_Principal(Matriz, i+1, j+1);
    }


}

int main()
{
    char Matriz[5][5][10];
    int i,j;

    printf("Insira os caracteres da Matriz\n");

    for(i = 0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Matriz[%d][%d] =",i, j);
            scanf("%s", Matriz[i][j]);
        }
        puts("");
    }

    i=0;
    j=0;

    Diagonal_Principal(Matriz, i, j);

    return 0;
}
