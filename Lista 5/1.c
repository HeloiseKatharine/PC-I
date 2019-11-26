
/*Crie um programa que recebe dois n�meros inteiros X e N e calcule X^N (X elevado a N). (N�o pode usar math.h)*/
#include<stdio.h>

int pot(int x, int n)
{
    printf("x = %d  n = %d\n", x, n);

    if(n == 1)
    {
        return x;
    }
    else
    {
        n--;
        return pot(x,n)*x;
    }

}

int main()
{
    int x, n, resultado ;

    scanf("%d %d", &x, &n);
    resultado = pot (x,n);

    printf("resultado = %d\n", resultado);

    return 0;
}
