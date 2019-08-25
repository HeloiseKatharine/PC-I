//1° LISTA
//QUESTÃO


#include <stdio.h>
#include <math.h>

int main()
{

    int num1,  num2, num3, resul=0;
    char ope;

    printf("\nCalculadora Simples\n");
    printf("Digite a operacao:\n");
    scanf("%d%c%d", &num1, &ope, &num2);



    if(ope == '+')
    {
        resul = num1 + num2;
    }
    if(ope == '-')
    {
        resul = num1 - num2;
    }
    if(ope == '*')
    {
        resul = num1 * num2;
    }
    if(ope == '/')
    {
        resul = num1 / num2;
    }


    printf("Digite o operador:\n");
    getchar();
    scanf("%c", &ope);

    while( ope != '=')
    {
        if(ope == '+')
        {
            printf("Digite um numero:\n");
            scanf("%d",&num3);
            resul = resul + num3;
            getchar();
            printf("Digite o operador:\n");
            scanf("%c", &ope);
        }

        if(ope == '-')
        {
            printf("Digite um numero:\n");
            scanf("%d",&num3);
            resul = resul - num3 ;
            getchar();
            printf("Digite o operador:\n");
            scanf("%c", &ope);
        }

        if(ope == '/')
        {
            printf("Digite um numero:\n");
            scanf("%d",&num3);
            resul = resul / num3 ;
            getchar();
            printf("Digite o operador:\n");
            scanf("%c", &ope);
        }
        if(ope == '*')
        {
            printf("Digite um numero:\n");
            scanf("%d",&num3);
            resul = resul * num3;
            getchar();
            printf("Digite o operador:\n");
            scanf("%c", &ope);
        }

    }

    printf("\nRESULTADO = %d\n", resul);






    return 0;
}
