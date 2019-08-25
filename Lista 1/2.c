/* Crie um programa que receba dois valores inteiros X e Y, e imprima todos os
valores �mpares entre eles, incluindo os valores de X e Y, caso sejam
�mpares.*/

#include<stdio.h>
int main()
{

    int a,b,i;

    printf("Digite dois valores:\n");
    scanf("%d %d", &a, &b);

    printf("Numeros impares entre %d e %d:\n", a, b);

    for(i=a; i<=b; i++)
    {
        if(i%2 != 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

