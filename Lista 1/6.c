/*Crie um programa em C que receba um número inteiro (string não permitida)
entre 0 e 999. Após isso, o programa deve imprimir o mesmo número por
extenso. Ex.: o número 937 de entrada gera a saída “Novecentos e trinta e
sete”
*/

#include<stdio.h>
int main()
{

    int num, unidade=0, dezena=0, centena=0;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num >= 0 && num <= 999)
    {
        centena = num/100;
        num = num%100;

        dezena = num/10;
        num = num%10;

        unidade=num/1;
    }

    switch(centena)
    {

    case 1:

        if(dezena > 0 || unidade > 0)
        {
            printf("cento e ");
            break;
        }
        else
        {
            printf("Cem");
            break;
        }

    case 2:

        if(dezena > 0 || unidade > 0)
        {
            printf("duzentos e ");
            break;
        }

        else
        {
            printf("duzentos ");
            break;
        }

    case 3:

        if(dezena > 0 || unidade > 0)
        {
            printf("trezentos e ");
            break;
        }

        else
        {
            printf("trezentos ");
            break;

        }

    case 4:

        if(dezena > 0 || unidade > 0)
        {
            printf("quatrocentos e ");
            break;
        }

        else
        {
            printf("quatrocentos  ");
            break;
        }


    case 5:

        if(dezena > 0 || unidade > 0)
        {
            printf("quinhentos e");
            break;
        }

        else
        {
            printf("quinhentos ");
            break;
        }


    case 6:

        if(dezena > 0 || unidade > 0)
        {
            printf("seiscentos e");
            break;
        }

        else
        {
            printf("seiscentos ");
            break;
        }


    case 7:

        if(dezena > 0 || unidade > 0)
        {
            printf("setecentos e  ");
            break;
        }

        else
        {
            printf("setecentos ");
            break;
        }

    case 8:

        if(dezena > 0 || unidade > 0)
        {
            printf("oitocentos e ");
            break;
        }

        else
        {
            printf("oitocentos  ");
            break;
        }

    case 9:

        if(dezena > 0 || unidade > 0)
        {
            printf("novecentos e  ");
            break;
        }

        else
        {
            printf("novecentos ");
            break;
        }
    }

    switch(dezena)
    {

    case 1:

        if(unidade == 1)
        {
            printf("once ");
            break;
        }

        else if (unidade == 2)
        {
            printf("doze ");
            break;
        }

        else if  (unidade == 3)
        {
            printf("treze ");
            break;
        }

        else if  (unidade == 4)
        {
            printf("catorze ");
            break;
        }

        else if  (unidade == 5)
        {
            printf("quinze ");
            break;
        }

        else if  (unidade == 6)
        {
            printf("dezesseis ");
            break;
        }

        else if (unidade == 7)
        {
            printf("dezessete ");
            break;
        }

        else if (unidade == 8)
        {
            printf("dezoito ");
            break;
        }

        else if  (unidade == 9)
        {
            printf("dezenove ");
            break;
        }

        else
        {
            printf("dez");
            break;
        }

    case 2:

        if(unidade > 0 )
        {
            printf("vinte e ");
            break;
        }

        else
        {
            printf("vinte");
            break;
        }


    case 3:

        if(unidade > 0 )
        {
            printf("trinta e ");
            break;
        }

        else
        {
            printf("trinta");
            break;
        }

    case 4:

        if(unidade > 0 )
        {
            printf("quarenta e ");
            break;
        }
        else
        {
            printf("quarenta");
            break;
        }

    case 5:

        if(unidade > 0 )
        {
            printf("cinquenta e ");
            break;
        }
        else
        {
            printf("cinquenta");
            break;
        }

    case 6:

        if(unidade > 0 )
        {
            printf("sessenta e ");
            break;
        }
        else
        {
            printf("sessenta");
            break;
        }

    case 7:

        if(unidade > 0 )
        {
            printf("setenta e ");
            break;
        }
        else
        {
            printf("setenta");
            break;

        }
    case 8:

        if(unidade > 0 )
        {
            printf("oitenta e ");
            break;
        }

        else
        {
            printf("oitenta");
            break;
        }

    case 9:

        if(unidade > 0 )
        {
            printf("noventa e ");
            break;
        }

        else
        {
            printf("noventa");
            break;
        }
    }

    if(dezena != 1)
    {
        switch(unidade)
        {

        case 1:

            printf(" um");
            break;

        case 2:

            printf(" dois");
            break;

        case 3:

            printf(" tres");
            break;

        case 4:

            printf(" quatro");
            break;

        case 5:

            printf(" cinco");
            break;

        case 6:

            printf(" seis");
            break;

        case 7:

            printf(" sete");
            break;

        case 8:
            printf(" oito");
            break;

        case 9:
            printf(" nove");
            break;
        }
    }
    printf("\n");

    return 0;
}
