/*Crie um programa em C que calcule o desvio padr�o de um
vetor de ponto flutuantes de precis�o simples (float) de tamanho 10 fornecido
pelo usu�rio.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 3

int main()
{
    float n[MAX],media_aritmetica,desvio_padrao=0, soma=0,somadp=0;
    int i;

    for(i=0; i<MAX; i++)
    {
        printf("Digite o %d valor: ",i+1);
        scanf("%f",&n[i]);
        printf("\n");
    }

    for(i=0; i<MAX; i++) //realiza a soma de cada elemento do vetor
    {
        soma = soma + n[i];
    }

    media_aritmetica = ((soma) / MAX); //realiza a media aritmetica

    //desvio padrao

    for(i=0; i<MAX; i++)
    {
        somadp = somadp + pow((n[i] - media_aritmetica),2);
    }

    desvio_padrao = sqrt(somadp / MAX);

    printf("O desvio padrao e: %f\n",desvio_padrao);

    return 0;
}
