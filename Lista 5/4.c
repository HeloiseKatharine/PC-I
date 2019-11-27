#include<stdio.h>
int busca_binaria(int vetor[],int inicio,int fim,int num)
{
    int meio = (inicio+fim)/2;

    if(inicio<=fim)
    {
        if(vetor[meio] == num)
        {
            printf("posicao = %d\n", meio);
            return 0;
        }
        else if (vetor[meio] > num)
        {
            return busca_binaria(vetor, inicio, meio-1, num);
        }
        else
        {
            return busca_binaria(vetor, meio+1, fim, num);
        }
    }
    else
    {
        printf("\nNao encontrado\n");
        return 0;
    }
}

int main()
{
    int resposta,num;

    printf("Informe o numero para ser encontrado: ");
    scanf("%d",&num);

    FILE *arq;
    int vetor_tst[100], i=0, aux;

    arq = fopen("numeros.txt", "r" );//leitura


    if(arq == NULL)
    {
        printf("Erro!");
    }

    else //copiar conteudo do arquivo para um vetor
    {
        while(fscanf(arq,"%d", &aux) != EOF)
        {
            vetor_tst[i] = aux;
            i++;
        }
    }

    fclose(arq);

    busca_binaria(vetor_tst,0,99,num);

    return 0;
}
