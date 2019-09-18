/*(Frases) Crie um programa que receba um parágrafo de tamanho máximo
igual a 500. O programa deve imprimir o mesmo parágrafo, contudo
separando todas as frases (ao encontrar pontos finais “.” ) usando o espaço
de uma linha em branco entre elas.*/

#include<stdio.h>
#include<string.h>
#define TAM 500
int main()
{
    int i=0;
    char texto[TAM];

    puts("Escreva um texto:");
    fgets(texto, TAM, stdin);
            printf("\n");

    while(texto[i] != '\0' && texto[i] != '\n' )//enquanto não terminou o texto
    {
        if(texto[i] == '.')
        {
            printf("%c",texto[i]);
            printf("\n\n");
        }
        else
        {
            printf("%c",texto[i]);
        }
        i++;
    }
    return 0;
}
