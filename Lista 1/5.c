/*Crie um programa em C que receba N valores reais (N fornecido pelo
usuário). Após isso, exiba a média aritmética desses valores*/

#include<stdio.h>
int main()
{
    int  n, i, soma=0, media=0;

    printf("Digite a quantidade de valores:\n");
    scanf("%d", &n);

    int  v [n] ;

    printf("\nDigite os valores:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++)
    {
        soma = soma + v[i];
    }

    media = (soma / n);

    printf("\nA media aritmetica e %d\n", media);

    return 0;
}
