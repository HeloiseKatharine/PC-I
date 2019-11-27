#include <stdio.h>
#include <string.h>

int palindromo (char *string, int y, int x )
{
    if(y <= x)
    {
        return 1;
    }
    else
    {
        if(string[y] == string[x])
        {
            return palindromo(string, y-1, x+1);
        }
        else
        {
            return 0;
        }
    }
}


int main()
{
    int i,j,max,pos,aux;
    char string[100];

    j=0;

    printf("Digite a string: ");
    scanf("%[^\n]s",string);

    max=strlen(string);//Verifica tamanho da string

    for (i = 0, pos = 0; i < max; i++,pos++)//Remove espacos em branco
    {
        if (string[pos] == ' ' || string[pos] == '-' || string[pos] == ',' || string[pos] == '.')
        {
            pos++;
        }
        string[i] = string[pos];
    }

    for(i=0;i<max;i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z' )
        {
            string[i] = string[i] + 32; 
        }
    }
    
    //strlwr(string);//Transforma todas as letras em minusculas

    max=strlen(string);//Verifica o tamanho da string sem espaços em branco

    aux = palindromo(string, max-1, j);

    if (aux == 1)
    {
        printf("Eh Palindromo\n");
    }

    else
    {
        printf("Nao eh Palindromo\n");
    }

    return 0;
}
