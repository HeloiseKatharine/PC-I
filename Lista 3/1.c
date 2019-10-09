#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define quant_pes 2

struct dma //data
{
    int dia;
    int mes;
    int ano;
};

struct cadastro
{
    char nome[30];
    int sexo;
    struct dma data;
};

struct cadastro pessoa[quant_pes];//tipo pessoa
struct dma data [quant_pes];

void cadastro_pessoa (struct cadastro pessoa[quant_pes], struct dma data[quant_pes], int *cont_cadastro)//função cadastro
{
    //struct cadastro pessoa;//tipo pessoasd

    printf("Digite o nome:\n");
    scanf("%[^\n]s", &pessoa[*cont_cadastro].nome);
    getchar();

    printf("Digite o sexo:(0 para masculino e 1 para feminino)\n");
    scanf("%d", &pessoa[*cont_cadastro].sexo);
    getchar();

    if(pessoa[*cont_cadastro].sexo != 0 && pessoa[*cont_cadastro].sexo != 1)
    {
        printf("\nErro!\nAperte 'enter' para voltar ao menu.");
    }
    else
    {
        printf("Digite a data:(DD/MM/AAAA)\n");
        scanf("%d %d %d", &pessoa[*cont_cadastro].data.dia, &pessoa[*cont_cadastro].data.mes, &pessoa[*cont_cadastro].data.ano);
    }
}


void excluir(struct cadastro pessoa[quant_pes], int *cont_cadastro)// Função Excluir pessoa
{
    int i,j, string_igual;
    char nome_exclui[30];

    printf("Digite o nome que deseja excluir:\n");
    scanf("%[^\n]s", &nome_exclui);

    if(*cont_cadastro == 0)
    {
        printf("Cadastro vazio\n");
    }
    else
    {
        for(i=0; i < *cont_cadastro; i++)
        {
            string_igual = strcmp(pessoa[i].nome, nome_exclui);

            if( string_igual == 0)//if(pessoa[i].nome == nome_exclui)
            {
                for(j=i; j < *cont_cadastro-1; j++)
                {
                    pessoa[j] = pessoa[j+1];
                }

                (*cont_cadastro)--;
            }
        }
    }
}

void exibe( struct cadastro pessoa[quant_pes], int *cont_cadastro)// Função exibir dados de todas as pessoas
{
    int  i;

    for(i=0; i < *cont_cadastro; i++)
    {
        printf("nome: %s\nsexo: %d\ndata: %d/%d/%d \n\n", pessoa[i].nome,pessoa[i].sexo, pessoa[i].data.dia, pessoa[i].data.mes, pessoa[i].data.ano);
    }
}

void exibe_velha(struct cadastro pessoa[quant_pes], int *cont_cadastro)
{
    int  i, maior = 0, maior_ano, maior_dia, maior_mes;

    maior_ano = pessoa[0].data.ano;
    maior_mes = pessoa[0].data.mes;
    maior_dia = pessoa[0].data.dia;

    for(i=1; i<*cont_cadastro; i++)
    {
        if(pessoa[i].data.ano < maior_ano)
        {
            maior_ano = pessoa[i].data.ano;
            maior = i;
        }

        if(pessoa[i].data.ano == maior_ano)
        {
            if(pessoa[i].data.mes < maior_mes)
            {
                maior_mes = pessoa[i].data.mes;
                maior = i;
            }

            if(pessoa[i].data.mes == maior_mes)
            {
                if(pessoa[i].data.dia < maior_dia)
                {
                    maior_dia = pessoa[i].data.dia;
                    maior = i;
                }

            }
        }
    }

    printf("\nPessoa mais velha\nnome: %s\nsexo: %d\ndata: %d/%d/%d \n\n", pessoa[maior].nome,pessoa[maior].sexo, pessoa[maior].data.dia, pessoa[maior].data.mes, pessoa[maior].data.ano);
}

void exibe_nova(struct cadastro pessoa[quant_pes], int *cont_cadastro)
{
    int  i, maior = 0, maior_ano, maior_dia, maior_mes;

    maior_ano = pessoa[0].data.ano;
    maior_mes = pessoa[0].data.mes;
    maior_dia = pessoa[0].data.dia;


    for(i=1; i< *cont_cadastro; i++)
    {
        if(pessoa[i].data.ano > maior_ano)
        {
            maior_ano = pessoa[i].data.ano;
            maior = i;
        }

        if(pessoa[i].data.ano == maior_ano)
        {
            if(pessoa[i].data.mes > maior_mes)
            {
                maior_mes = pessoa[i].data.mes;
                maior = i;
            }

            if(pessoa[i].data.mes == maior_mes)
            {
                if(pessoa[i].data.dia > maior_dia)
                {
                    maior_dia = pessoa[i].data.dia;
                    maior = i;
                }

            }
        }
    }
    printf("\nPessoa mais nova\nnome: %s\nsexo: %d\ndata: %d/%d/%d \n\n", pessoa[maior].nome,pessoa[maior].sexo, pessoa[maior].data.dia, pessoa[maior].data.mes, pessoa[maior].data.ano);

}

int main()
{
    int num=0, cont_cadastro=0; // cadastro = 0

//    struct cadastro pessoa[quant_pes];//tipo pessoa

    while( num != 6 )
    {
        printf("\n1 - Cadastrar pessoa\n2 - Excluir pessoa\n3 - Exibir dados de todas as pessoas\n4 - Exibir dados da pessoa mais velha\n5 - Exibir dados da pessoa mais nova\n6 - Sair do programa\n");

        scanf("%d", &num);
        printf("\n");
        getchar();

        switch(num)
        {

        case 1://Cadastrar pessoa

            cadastro_pessoa(pessoa,data, &cont_cadastro);
            getchar();
            cont_cadastro++;
            break;

        case 2:// Excluir pessoa

            excluir(pessoa, &cont_cadastro);
            break;

        case 3: //Exibir dados de todas as pessoas

            exibe(pessoa,&cont_cadastro);
            break;

        case 4://Exibir dados da pessoa mais velha

            exibe_velha(pessoa, &cont_cadastro);
            break;

        case 5://Exibir dados da pessoa mais nova

            exibe_nova(pessoa, &cont_cadastro);
            break;

        case 6://sair do programa

            break;
        }
    }
    return 0;
}
