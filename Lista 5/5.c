/*Crie um programa em C que receba uma string de tamanho máximo 100 e
retorne o reverso dessa string.
*/

#include <stdio.h>
#include <string.h>

int string_reversa(char String[], int Tamanho)
{
    if(Tamanho == 0)
    {
        printf("%c", String[Tamanho]);
        return 0;
    }
    else
    {
        printf("%c", String[Tamanho]);
        string_reversa(String, Tamanho-1);
    }
}

int main()
{
    int Tamanho = 0;
    char String[100];

    printf("Insira uma string\n");
    scanf("%[^\n]s", String);

    Tamanho = strlen(String);

    string_reversa(String, Tamanho);

    return 0;
}
