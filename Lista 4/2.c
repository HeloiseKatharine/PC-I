/*Seja um arquivo de texto 2.txt com o seguinte formato:
onde cada linha possui três dados separados por ponto e vírgula ‘;’:

● Nome de um objeto (string podendo conter espaços com tamanho
máximo 30);
● Quantidade desse objeto em estoque;
● Preço do objeto.

respectivamente.
Note que o arquivo 2.txt tem 10 objetos registrados e tem uma linha em
branco em sua última linha. Crie um programa em C que leia o arquivo 2.txt e salve
em um arquivo chamado 2_ordenado.txt no mesmo formato de 2.txt, contudo com
os objetos em ordenados em ordem decrescente de preço total (preço vezes a
quantidade de um objeto em estoque).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int r=0;
    int aux;
    int qtd[10];
    int pos[10];
    double preco[10];
    double preco_total[10];
    double aux_preco[10];
    char nome_objeto[10][30];
    char aux_objeto[10][30];

    //CRIA VARIAVEL PONTEIRO PARA O ARQUIVO 2.TXT
    FILE *pont_arq;

    //ABRINDO O ARQUIVO 2.TXT COM TIPO DE ABERTURA R
    pont_arq = fopen("2.txt","r");

    //ARMAZENA OS DEZ OBJETOS
    for(int i=0; i<10 && !feof(pont_arq); i++)
    {
        fscanf(pont_arq,"%[^;];%d;%lf[^\n]", nome_objeto[i],&qtd[i],&preco[i]);

        preco_total[i]= (double)(qtd[i]*preco[i]);

        aux_preco[i]=preco_total[i];

        if(i == 0)
        {
            strcpy(aux_objeto[i],nome_objeto[i]);
        }
    }

    //COLOCA O PRE�O TOTAL EM ORDEM DECRESCENTE
    for(int i=0; i<10; i++)
    {
        for(int k=i; k<10; k++)
        {
            if(preco_total[i]<preco_total[k])
            {
                aux = preco_total[i];
                preco_total[i]=preco_total[k];
                preco_total[k]=aux;
            }
        }
    }

    //ARMAZENA A POSICAO EM ORDEM DECRESCENTE
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(preco_total[i]==aux_preco[j])
            {
                pos[r]=j;
                r++;
            }
        }
    }

    //CRIA VARIAVEL PONTEIRO PARA O ARQUIVO 2_ORDENADO.TXT
    FILE *pont_arq2;

    //ABRINDO O ARQUIVO 2_ORDENADO.TXT COM TIPO DE ABERTURA W
    pont_arq2 = fopen("2_ordenado.txt","w");

    for(r=0; r<10; r++)
    {
        for(int i=0; i<10; i++)
        {
            if(pos[r] == i)
            {
                if(strcmp(aux_objeto[0],nome_objeto[i])== 0)
                {
                    fprintf(pont_arq2, "\n%s;%d;%.2lf", nome_objeto[i],qtd[i],preco[i]);
                }
                else
                {
                    fprintf(pont_arq2, "%s;%d;%.2lf", nome_objeto[i],qtd[i],preco[i]);
                }
            }

        }

    }

    printf("Arquivo Criado!\n");

    //USANDO FCLOSE PARA FECHAR O ARQUIVO 2_ORDENADO.TXT
    fclose(pont_arq2);

    //USANDO FCLOSE PARA FECHAR O ARQUIVO 2.TXT
    fclose(pont_arq);

    return 0;
}
