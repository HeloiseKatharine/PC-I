/*Crie um programa em C que leia o arquivo de texto 1.fasta, contendo o
padrão definido acima e com a sequência de DNA possuindo no máximo 1000
caracteres, e retorne o id da sequência seguido do conteúdo GC.*/

#include <stdio.h>
#include <math.h>
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;

    float ConteudoGC;
    float VerificaG=0;
    float VerificaC=0;
    float VerificaA=0;
    float VerificaT=0;
    char aux;
    int i=0;


    fp = fopen("1.fasta","r");//leitura do arquivo

    if(fp == NULL)
    {
        printf("Erro!");
        return 0;
    }

//determinar o tamanho do arquivo

    while(fscanf(fp, "%c", &aux) != EOF)
    {
        i++;
    }

    char *texto = malloc((i+1)*sizeof(char)); //alocando a memoria

    rewind(fp);//voltar para o inicio
    i=0;

    //copiar o conteudo do arquivo no vetor texto

    while(fscanf(fp, "%c", &aux) != EOF)
    {
        texto[i] = aux;
        i++;
    }
    texto[i] = '\n';

    int tamanho = 0;
    tamanho = strlen(texto);

    //contando as letrinhas
    for(i=0; i<tamanho; i++)
    {
        if(texto[i] == 'A')
        {
            VerificaA++;
        }
        if(texto[i] == 'C')
        {
            VerificaC++;
        }
        if(texto[i] == 'T')
        {
            VerificaT++;
        }
        if(texto[i] == 'G')
        {
            VerificaG++;
        }
    }

    fclose(fp);

    ConteudoGC = (((VerificaG) + (VerificaC))/((VerificaG) + (VerificaC) + (VerificaA) + (VerificaT)))*100;

    printf(">id = %f\n",ConteudoGC);

    return;
}
