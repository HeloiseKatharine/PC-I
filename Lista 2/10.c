/*
Seja um restaurante possuindo a seguinte
organização:
a) 8 mesas organizadas em 4 fileiras;
b) Cada fileira possui 2 mesas;
c) Cada mesa possui 4 cadeiras;
Crie um programa em C que receba uma matriz de caracteres,Caso a cadeira esteja sendo utilizada, 
o elemento da matriz será um ‘V’. Caso contrário (a cadeira está disponível), o elemento da matriz será um ‘B’.

Após receber a matriz do usuário deve-se exibir em ordem:
● Quais mesas estão totalmente ocupadas;
● Quais mesas estão parcialmente ocupadas;
● Quais mesas estão totalmente disponíveis.
*/

#include<stdio.h>
#define linha 8
#define coluna 4

void preenche_matriz( char matriz[linha][coluna])
{
    int i,j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("[%d][%d]", i, j );
            scanf("%c",&matriz[i][j]);
            getchar();
        }
    }
}

int mesa(char matriz[linha][coluna], int l, int c)
{
    int i,j,cont=0;

    for(i=l; i<l+2; i++)
    {
        for(j=c; j<c+2; j++)
        {
            if(matriz[i][j] == 'V')
            {
                cont++;
            }
        }
    }
    return cont;
}

int main()
{
    int i, j, c, l, num_mesa=1, situacao=0;

    int  cont_tocupado=0, cont_pocupado=0, cont_tvago=0;

    int total_ocupado[linha], parcial_ocupado[linha], total_vago[linha];

    char matriz[linha][coluna];

    preenche_matriz(matriz);

    for(i=0; i<linha; i+=2)
    {
        situacao= mesa(matriz,i,0);//primeira mesa

        if(situacao == 4)
        {
            total_ocupado[cont_tocupado] = num_mesa;
            cont_tocupado++;
        }

        else if(situacao == 0)
        {
            total_vago[cont_tvago] = num_mesa;
            cont_tvago++;
        }

        else
        {
            parcial_ocupado[cont_pocupado] = num_mesa;
            cont_pocupado++;

        }

        num_mesa++;

        situacao = mesa(matriz,i,2);//segunda mesa

        if(situacao == 4)
        {
            total_ocupado[cont_tocupado] = num_mesa;
            cont_tocupado++;
        }

        else if(situacao == 0)
        {
            total_vago[cont_tvago] = num_mesa;
            cont_tvago++;
        }

        else
        {
            parcial_ocupado[cont_pocupado] = num_mesa;
            cont_pocupado++;
        }

        num_mesa++;
    }

    printf("\nMesas totalmente ocupadas:\n");
    for(i=0; i<cont_tocupado; i++)
    {
        printf("Mesa %d ", total_ocupado[i]);
    }
    puts("");

    printf("\nMesas parcialmente ocupadas:\n");
    for(i=0; i<cont_pocupado; i++)
    {
     printf("Mesa %d ", parcial_ocupado[i]);
    }
    puts("");

    printf("\nMesas totalmente disponiveis:\n");
    for(i=0; i<cont_tvago; i++)
    {
        printf("Mesa %d ", total_vago[i]);
    }
    puts("");

    return 0;
}
