#include<stdio.h>
int main()
{

    int i=0,aux=0, sub=0, mult=0,menor;
    int x;


    printf("Digite um valor:\n");
    scanf("%d", &x);

    menor=x;

    for(i=0; i<=menor; i++)
    {
        mult = i * i * i;

        sub = (x - mult);

        if(sub<0)
        {

            sub*=(-1);
        }

        if(sub<menor)
        {
            menor=sub;
            sub=menor;
            aux=i;
        }

        //printf("\ni= %d\nsub = %d\nmult = %d\naux = %d\nmenor = %d\n",i,sub,mult,aux,menor);

    }

    printf("%.0d\n",aux);

    return 0;
}



