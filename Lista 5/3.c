/* [Merge sort] implemente o algoritmo mergesort que recebe um vetor de 10 inteiros
e exibe o vetor ordenado */
#include<stdio.h>
#include<stdlib.h>

void Merge(int vetor[], int inicio, int meio, int fim)
{
    int vetor_aux[10];
    int i, j,k;

    int tam_vetor1;
    int tam_vetor2;

    tam_vetor1 = meio - inicio +1;//tamanho
    tam_vetor2 = fim - meio;

    //cria vetores auxiliares
    int vetor1[tam_vetor1];
    int vetor2[tam_vetor2];

    //realiza a compra��o

    for(i=0; i<tam_vetor1; i++)
    {
        vetor1[i] = vetor[inicio+i];
    }

    for(j=0; j<tam_vetor2; j++)
    {
        vetor2[j] = vetor[meio+j+1];
    }

//junta
    i=0;
    j=0;
    k = inicio;

//compara

    while(i<tam_vetor1 && j<tam_vetor2)
    {
        if(vetor1[i] <= vetor2[j])
        {
            vetor[k] = vetor1[i];
            i++;
        }
        else
        {
            vetor[k] = vetor2[j];
            j++;
        }
        k++;
    }

    while(i<tam_vetor1)
    {
        vetor[k] = vetor1[i];
        i++;
        k++;
    }
    while(j<tam_vetor2)
    {
        vetor[k] = vetor2[j];
        j++;
        k++;
    }
}


void MergeSort(int vetor[], int inicio, int fim)
{
    int meio=0;

    if(inicio < fim)
    {
        meio = ((inicio+fim)/2);//define o meio do vetor
        MergeSort(vetor, inicio, meio);//chama para a primeira metade do vetor
        MergeSort(vetor, meio+1, fim);//chama para a segunda metade do vetor
        Merge(vetor, inicio, meio, fim);
    }
}


int main()
{
    int vetor[10], i;

    printf("Digite os valores do vetor:\n");

    for(i=0; i<10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    MergeSort(vetor,0,9);

    printf("vetor ordenado:\n");

    for(i=0; i<10; i++)
    {
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}
