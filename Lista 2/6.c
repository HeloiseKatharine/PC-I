/*Crie um programa que receba uma frase e um termo. Caso
o termo esteja presente na frase, remova-o e imprima a frase modificada,
caso contrário, exiba “Termo não encontrado na frase”.Considere o tamanho
de string máximo igual a 200.*/

#include<stdio.h>
#include<string.h>

void removeTermo(char *string,int indice,int tam_termo)
{
    int i;

    i=indice;

    while (string[i+tam_termo] != '\0')
    {
        string[i] = string[i+tam_termo];
        i++;
    }
    string[i] = '\0';
}

int main()
{
    char string[200], termo[200];
    int i,j,k;
    int tam_termo, tam_string;
    int match=1;

    printf("Digite a string:\n");
    scanf("%[^\n]s",string);
    getchar();

    printf("Digite o termo:\n");
    scanf("%[^\n]s",termo);

    tam_string= strlen(string);
    tam_termo= strlen(termo);

    for (i =0; i < tam_string-tam_termo+1; i++)
    {
        match = 1;
        k = i;
        for (j=0; j < tam_termo; j++)
        {
            if (termo[j] != string[k])
            {
                match = 0;
                break;
            }

            k++;
        }

        if (match == 1)
        {
            removeTermo(string,i,tam_termo);
            tam_string = tam_string - tam_termo;
            i--;
        }
    }

    if(match == 1)
    {
        printf("\nfrase modificada:\n%s\n",string);
    }
    else
    {
        printf("Termo nao encontrado na frase.\n");
    }

    return 0;
}
