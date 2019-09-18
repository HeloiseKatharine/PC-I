/*Crie um programa que simule a instrução SLL para um vetor de inteiros de 8
posições que aceite apenas valores 0 e 1.
● Receber do usuário um vetor de inteiros (0 ou 1) de 8 posições;
● Imprimir o valor decimal do número em binário expresso pelo vetor;
● Receber do usuário um número inteiro referente ao deslocamento à esquerda
da instrução SLL;
● Imprimir o vetor resultante após o SLL;
● Imprimir o valor decimal do número em binário expresso pelo vetor resultante.
*/

#include<stdio.h>
#include<math.h>
#define TAM 8

void transforma_decimal(int *vetor)//função transforma em decimal
{
    int i,soma=0, cont=7;

    for(i=0; i<TAM; i++)
    {
        soma = soma + (vetor[i] * pow(2,cont));
        cont--;
    }

    printf("\nValor em decimal = %d\n", soma);
}

void sll(int num, int *vetor) // função Shift logic left (SLL).
{
    int i, j;

    printf("\nDeslocamento de %d para a esquerda:\n",num);

    for(i=num,j=0; i<TAM-1,j<TAM-num; i++,j++) //desloca os vetores
    {
        vetor[j] = vetor[i];
    }

    for(j=TAM-1; j>=TAM-num; j--) //zera os (num) ultimos vetores
    {
        vetor[j] = 0;
    }

    for(i=0; i<TAM; i++) //imprime vetor
    {
        printf("%d ",vetor[i]);
    }

    printf("\n");

    transforma_decimal(vetor);

}

int main()
{
    int vetor[TAM], i, soma=0,num,erro=0;

    printf("Digite o valor em binario:\n");

    for(i=0; i<TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<TAM; i++)//confirmação binario
    {
        if(vetor[i] != 0 && vetor[i] != 1 )
        {
            erro++;
        }
    }
    if(erro > 0)
    {
        printf("\nErro.\n");
    }
    else
    {
        transforma_decimal(vetor);

        printf("\nDigite um valor referente ao deslocamento a esquerda(SLL):\n");
        scanf("%d", &num);

        sll(num,vetor);
    }
    return 0;
}
