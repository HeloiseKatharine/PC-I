/*
Crie um programa em C que implementa um sistema para um mercado. Este
sistema deve exibir um menu de opera��o a todo momento de sua execu��o
com as seguintes op��es:
1 - Cadastrar novo produto
2 - Exibir pre�o de um produto
3 - Alterar pre�o de um produto
4 - Encerrar sistema
Na op��o 1, deve-se cadastrar um novo item do mercado (m�ximo de
20 itens). Um item de mercado possui as seguintes caracter�sticas: nome
(tamanho m�ximo 20), c�digo de barras (string de tamanho igual a 13,
contendo apenas n�meros), pre�o, quantidade, tipo (0 para perec�vel e 1
para n�o perec�vel). Caso seja um produto perec�vel, tamb�m deve possuir
data de validade (DD/MM/AAAA). Na op��o 2, deve-se ler o c�digo de
barras de um produto (digitando-o) e exibir todos os dados do produto, caso
exista. Na op��o 3, deve-se ler o c�digo de barras de um produto, caso
exista, deve-se altera o pre�o deste. Por fim, a op��o 4 encerra o programa.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct cadastro_item
{
    char nome[20];
    char codigo[13];//string que contem numeros ? int ou char ?
    float preco;
    int quantidade;
    int tipo;
    char validade[11];

};

struct cadastro_item cadastro[20];

void cadastrar_produto(struct cadastro_item cadastro[20], int *quant)//Cadastrar novo produto
{
    printf("Digite o nome do produto:\n");
    scanf("%s", cadastro[*quant].nome);
  getchar();

    printf("Digite o codigo do produto:\n");
    scanf("%s", cadastro[*quant].codigo);
 getchar();

    printf("Digite o preco do produto:\n");
    scanf("%f", &cadastro[*quant].preco);
    getchar();

    printf("Digite a quantidade do produto\n");
    scanf("%d",&cadastro[*quant].quantidade);
    getchar();

    printf("Digite o tipo do produto (0 para perecivel e 1 para nao perecivel)\n");
    scanf("%d",&cadastro[*quant].tipo);
    getchar();

    if(cadastro[*quant].tipo != 0 && cadastro[*quant].tipo != 1)
    {
        printf("\nErro!\nAperte 'enter' para voltar ao menu.\n");
    }
    else
    {
        if(cadastro[*quant].tipo == 0)
        {
            printf("Digite a data de validade do produto (DD/MM/AAAA)\n");
            scanf("%s", cadastro[*quant].validade);
            getchar();
        }
    }
}

void exibe_preco(struct cadastro_item cadastro [20], int *quant)
{
    int i, igual ;
    char cod[13];

    printf("Digite o codigo do produto:\n");
    scanf("%s", cod);
    getchar();

    for(i=0; i<*quant ; i++)
    {
        igual = strcmp(cadastro[i].codigo, cod);

        if(igual == 0)//igual
        {
            printf("\nNome: %s\ncodigo: %s\npreco: %.2f\nquantidade: %d\n",cadastro[i].nome, cadastro[i].codigo, cadastro[i].preco, cadastro[i].quantidade);

            if(cadastro[i].tipo == 1)
            {
                printf("Tipo: %d\n", cadastro[i].tipo);
            }
            else
            {
                printf("Tipo: %d\nValidade: %s\n", cadastro[i].tipo, cadastro[i].validade);
            }
        }
    }
}

void altera_preco(struct cadastro_item cadastro [20], int *quant)
{
    char cod[13];
    int igual, i;

    printf("Digite o codigo do produto:\n");
    scanf("%s", cod);
    getchar();


    for(i=0; i<*quant ; i++)
    {
        igual = strcmp(cadastro[i].codigo, cod);

        if(igual == 0)//igual
        {
            printf("\nDigite o novo preco do produto: ");
            scanf("%f", &cadastro[i].preco);
        }
    }
}

int main()
{
    int opc =0, quant=0;

    while(opc != 4)
    {
        printf("\n1 - Cadastrar novo produto\n2 - Exibir pre�o de um produto\n3 - Alterar pre�o de um produto\n4 - Encerrar sistema\n");
        scanf("%d", &opc);
        switch(opc)
        {

        case 1://Cadastrar novo produto

            cadastrar_produto(cadastro, &quant);
            quant ++;
            break;

        case 2://Exibir pre�o de um produto

            exibe_preco(cadastro, &quant); // exibe pre�o ou todos os dados????????????????????
            break;

        case 3://Alterar pre�o de um produto
            altera_preco(cadastro, &quant);

            break;

        case 4://Encerrar sistema

            break;
        }
    }

    return 0;
}
