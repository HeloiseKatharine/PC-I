/*Crie um programa que receba do usuário dois vetores de
tamanho 5, cujo elementos são os nomes de pessoas (tamanho máximo 10)
que irão dançar na quadrilha de uma festa junina. Após isso, o programa
deve percorrer os dois vetores juntando os i-ésimos nomes de cada vetor em
uma matriz 5x2, ou seja, serão formados pares entre os dois vetores
(formando a fila para a quadrilha). Por fim, exiba a matriz construída.*/

#include<stdio.h>
#include<string.h>

int main()
{

    char vetor1[5][10], vetor2[5][10], quadrilha[5][2][10];
    int i;

    printf("Digite os nomes:\n");

    for(i=0; i<5; i++)
    {
        scanf("%[^\n]s", vetor2[i]);
        getchar();
    }
    printf("\n");
    for(i=0; i<5; i++)
    {
        scanf("%[^\n]s", vetor1[i]);
        getchar();
    }

//quadrilha

    for(i=0; i<5; i++)
    {
        strcpy (quadrilha[i][0], vetor2[i]);
        strcpy (quadrilha[i][1], vetor1[i]);
    }

    printf("\nPares formados:\n");

    for(i=0; i<5; i++)
    {
        printf("%15s %-15s", quadrilha[i][0], quadrilha[i][1]);
        printf("\n");
    }

    return 0;
}
