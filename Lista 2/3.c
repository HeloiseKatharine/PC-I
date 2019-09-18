/*(Arredondamento) Crie um programa em C que recebe como entrada um
vetor de 10 pontos flutuantes de precisão dupla (double). Para cada elemento
do vetor, deve-se arredondar o valor para cima, caso sua primeira casa
decimal seja maior ou igual que 5, ou para baixo, caso contrário. Por fim,
imprima o vetor resultante. (Obs.: não deve ser usada a biblioteca math.h)*/

    /*1.4 2.56 3.0 4.5 5.99 6.0 7.499 9.06 10.499 1.3*/

#include<stdio.h>
#define TAM 10

int main()
{
    int i;
    double vet[TAM], decimal;

    printf("Digite os valores:\n");
    for(i=0; i<TAM; i++) //LENDO O VETOR
    {
        printf("valor %d: ",i+1);
        scanf("%lf",&vet[i]);
    }

    for(i=0; i<TAM; i++)
    {
        decimal = vet[i] - (int)vet[i];

        if(decimal >= 0.5)
        {
            vet[i] = (int) vet[i] + 1;
        }
        else
        {
            vet[i] = (int) vet[i];
        }
    }

    printf("\n");

    for(i=0; i<TAM; i++) //IMPRIME VETOR
    {
        printf("%.2lf, ",vet[i]);
    }

    printf("\n");

    return 0;
}
