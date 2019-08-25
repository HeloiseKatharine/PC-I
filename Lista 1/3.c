#include<stdio.h>
int main()
{

    int pers, umid, vento;

    printf("Perspectiva\n\n1-Ensolarado\n2-Nublado\n3-Chuvoso\n");

    scanf("%d", &pers);

    switch(pers)
    {
    case 1:

        printf("Umidade\n1-Alta\n2-Normal\n3-Baixa\n");


        switch (umid)
        {
        case 1:
            printf("NAO");

            break;
        case 2:

            printf("SIM");
            break;
        case 3:
            printf("NAO");
            break;
        }

        break;

    case 2:

        printf("SIM");
        break;

    case 3:
        printf("Vento\n1-Forte\n2-Fraco\n");
scanf("%d", &vento);
        if(vento == 1)
        {
            printf("NAO");
        }

        if(vento == 2)
        {
            printf("SIM");
        }


        break;
    }
    return 0;
}
