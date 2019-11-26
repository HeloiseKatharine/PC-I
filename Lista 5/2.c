#include <stdio.h>

int fibonacci(int n)
{
    if(n == 0)//F(0)=0
    {
        return 0;
    }

    else if(n == 1)//F(1)=1
    {
        return 1;
    }

    else//F(N)>1
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main()
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d",&n);

    printf("\nFibonacci: %d",fibonacci(n));

    printf("\n");

    return 0;
}
