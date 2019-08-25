/* Crie um programa em C que recebe uma letra (de A a Z), imprime na tela se
ela � mai�scula ou min�scula e imprime uma faixa de letras, come�ando pela
letra digitada at� alcan�ar a letra z, caso seja min�scula, ou Z, caso seja
mai�scula*/

#include<stdio.h>
int main()
{
    char letra, i;

    printf("Digite uma letra:\n");
    scanf("%c", &letra);

    if(letra >= 'A' && letra <= 'Z') //maiuscula
    {
        printf("letra maiuscula.\n\n");

        for(i=letra; i<= 'Z'; i++)
        {
            printf("%c ", i);
        }
    }

    if(letra >= 'a' && letra <= 'z') //minuscula
    {
        printf("letra minuscula.\n\n");

        for(i=letra; i<= 'z'; i++)
        {
            printf("%c ", i);
        }
    }
    return 0;
}
