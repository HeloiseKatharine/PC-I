/*Crie um programa em C que recebe um vetor de
caracteres de tamanho 20 do usu�rio e imprime o caractere com mais
ocorr�ncias no vetor seguido da quantidade de ocorr�ncias deste.*/

/*a b c a b c a a a a a a a b c a a b v r*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char string[20],letras[20];
    int i,j,quant_letras=0,cont[20],achou,maior=0;

    printf("Digite os caracteres:\n");

    for(i=0; i<20; i++) //lendo os elementos
    {
        scanf("%c",&string[i]);
        getchar();
    }

    for(i=0; i<20; i++)//para cada
    {
        achou = 0;

        for(j=0; j<quant_letras; j++)
        {
            if(string[i] == letras[j])
            {
                achou = 1;
                cont[j] ++;
            }
        }

        if(!achou) //se n�o achou
        {
            letras[quant_letras] = string[i];
            cont[quant_letras] = 1;
            quant_letras ++;
        }
    }

    printf("Quantidade de elementos:\n");

    for(i=0; i<quant_letras; i++)//letras encontradas e quantidade de letras
    {
        printf("%c = %d\n",letras[i],cont[i]);
    }

    //maior elemento
    for(i=1; i<quant_letras; i++)
    {
        if(cont[i] > cont[maior])
        {
            maior = i;
        }
    }

    printf("\nO caracter com mais  ocorrencia e:  %c = %d\n",letras[maior],cont[maior]);

    return 0;
}
