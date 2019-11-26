/*Crie um programa que l� um arquivo de texto 5.txt e remove todas as
ocorr�ncias de um determinado termo de tamanho m�ximo 5 (fornecido pelo
usu�rio) no arquivo 5.txt.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{

    char termo[5], aux;
    int i, j, k=0,l=0, tam_termo=0, tam_vetor=0, encontrou=0;

    printf("Digite o termo de tamanho maximo 5 caracteres:\n");
    scanf("%s", termo);

    tam_termo = strlen(termo); //tamanho do termo digitado

    FILE *texto;

    texto = fopen("5.txt", "r+"); //abrindo arquivo para leiturae grava��o.

    if(texto == NULL)
    {
        fprintf(stderr, "Erro!\n");
    }

    while(fscanf(texto, "%c", &aux) != EOF)
    {
        i++;//tamanho do arquivo
    }

    char *vetor = malloc((i+1)*sizeof(char));//cria vetor

    rewind(texto);//volta ao inicio do arquivo

    i=0;

    while(fscanf(texto, "%c", &aux) != EOF) //passa os dados para o vetor
    {
        vetor[i] = aux;
        i++;
    }
    vetor[i] = '\0';

    tam_vetor = i; //tamanho do vetor

    for(i=0; i<tam_vetor-1; i++) //procura o termo
    {
        encontrou = 1;
        k=0;
        for(j=0; j<tam_termo; j++)
        {
            if(vetor[i+k] != termo[j])
            {
                encontrou = 0;
                break;
            }
            k++;
        }

        if(encontrou == 1)//remover termo
        {
            for(l=i; l<tam_vetor; l++)
            {
                vetor[l]  = vetor[l+tam_termo];
            }
        }
    }

    rewind(texto);

    fprintf(texto, "%s", vetor);// copia o vetor modificado no arquivo

    fclose(texto);//fechando arquivo

    return 0;
}
