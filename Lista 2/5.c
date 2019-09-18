/*(Time de basquete) Um time de basquete consiste basicamente de 5
jogadores, normalmente um pivô (número 5), dois alas (números 3 e 4) e dois
armadores (números 1 e 2). Crie um programa que receba na mesma linha o
primeiro nome seguido por um espaço e o número referente à sua posição no
jogo (ex.: “Brian 3” indicando que Brian é um dos alas). Note que o nome dos
jogadores podem ser fornecidos em qualquer ordem. Ao final do programa,
exiba em ordem crescente, em relação ao número da posição, o nome do
jogador e o nome de sua posição no jogo.*/

#include <stdio.h>
#include <string.h>

int main()
{

    char nomes[5][50];
    int posicao[5];
    int i,j;

    j=0;

    printf("Digite os nomes dos jogadores e o numero de suas posicoes:\n");

    for(i=0; i<5; i++)
    {
        scanf("%s %d",nomes[i],&posicao[i]);
    }

    printf("\n");

    printf("nome dos jogadores e o nome de suas posicoes no jogo:\n\n");

    for(i=0; i<5; i++)
    {
        if(posicao[i] == 1)
        {
            printf("%s armador\n",nomes[i]);
        }
    }

    for(i=0; i<5; i++)
    {
        if(posicao[i] == 2)
        {
            printf("%s armador\n",nomes[i]);
        }

    }

    for(i=0; i<5; i++)
    {
        if(posicao[i] == 3)
        {
            printf("%s ala\n",nomes[i]);
        }
    }

    for(i=0; i<5; i++)
    {
        if(posicao[i] == 4)
        {
            printf("%s ala\n",nomes[i]);
        }
    }

    for(i=0; i<5; i++)
    {
        if(posicao[i] == 5)
        {
            printf("%s pivo\n",nomes[i]);
        }
    }
    return 0;

}
