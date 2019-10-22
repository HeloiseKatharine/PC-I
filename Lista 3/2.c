/*
(Discoteca) Crie um programa em C que registra informa��es das m�sicas de um �lbum musical. Um �lbum pode ser caracterizado
pelos seguintes dados: nome (tamanho m�ximo de 25 caracteres), g�nero musical (tamanho m�ximo de 25 caracteres), quantidade
de m�sicas (m�ximo de 10 m�sicas) e um vetor de m�sicas. Uma m�sica � caracterizada por: n�mero da m�sica (incremental,
sendo zero a primeira m�sica do disco), nome (tamanho m�ximo de 25 caracteres), dura��o da m�sica (formato da string: MM:SS). O
programa deve exibir a todo momento as seguintes op��es:

1 - Criar um �lbum m�sical
2 - Adicionar m�sica ao �lbum
3 - Listar m�sicas do �lbum
4 - Sair

A op��o 1 s� pode ser escolhida uma �nica vez, enquanto as op��es 2 e 3 s� podem ser escolhidas ap�s a cria��o do �lbum.
Caso a op��o 1 seja escolhida mais de uma vez, o atual �lbum deve ser apagado e inserido informa��es sobre o novo �lbum.
A op��o 2 deve exibir mensagem de erro, caso o usu�rio tente adicionar mais de 10 m�sicas. J� na op��o 3, deve-se listar
em ordem crescente (a partir do n�mero da m�sica) o n�mero da m�sica, nome e dura��o da m�sica. Por fim,
a op��o 4 encerra o programa.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct vetor_musicas
{
    int num_musica;
    char nome[25];
    char tempo[3];
};

struct album_musical
{
    char nome[25];
    char genero[25];
    int quant_musica; // 10
    struct  vetor_musicas musicas[10];
};

struct vetor_musicas musicas;
struct album_musical album;

void criar_album(struct album_musical album)//Criar um �lbum m�sical
{
    int i;

    printf("Digite o nome do album:\n");
    scanf("%[^\n]s", album.nome);//string n�o precisa de &
    getchar();

    printf("Digite o genero do album:\n");
    scanf("%[^\n]s", album.genero);//string n�o precisa de &
    getchar();
}

void add_musicas(struct album_musical *album)//Adicionar m�sica ao �lbum
{
    int i=0;

    i = (*album).quant_musica;

    if(i <= 3)//10
    {
        printf("Digite nome da %d musica\n", i);
        scanf("%[^\n]s", &(*album).musicas[i].nome); //????????????
        getchar();

        printf("Digite o tempo de dura��o da %d musica(MM:SS)\n", i);
        scanf("%[^\n]s", &(*album).musicas[i].tempo);
        getchar();
        printf("\n");

        (*album).musicas[i].num_musica = i;//numero da musica
        i++;
    }

    else
    {
        printf("Erro!\n");
    }

    (*album).quant_musica++;
}

void lista_musicas(struct album_musical *album)
{
    int i, quant;
    printf("\n");
    printf("quant  = %d\n", (*album).quant_musica);
    printf("\n");

    for(i=0; i<(*album).quant_musica; i++)
    {
        printf("Numero da musica: ");
        printf("%d", (*album).musicas[i].num_musica);// ????
        printf("\n");

        printf("Nome da musica: ");
        printf("%s", (*album).musicas[i].nome);// ????
        printf("\n");

        printf("Tempo da musica: ");
        printf("%s", (*album).musicas[i].tempo);// ????
        printf("\n");
        printf("\n");
    }
}

int main()
{
    int opc = 0, aux=0;

    while(opc != 4)
    {
        printf("\n1 - Criar um album musical\n2 - Adicionar musica ao album\n3 - Listar musicas do album\n4 - Sair\n");

        scanf("%d",&opc);
        printf("\n");
        getchar();

        switch(opc)
        {
        case 1://Criar um �lbum m�sical

            criar_album(album);
            aux=1;
            break;

        case 2://Adicionar m�sica ao �lbum

            if(aux == 1)
            {
                add_musicas(&album);
            }
            else
            {
                printf("Album inesistente.\n");
            }
            break;

        case 3://Listar m�sicas do �lbum

            if(aux == 1)
            {
                lista_musicas(&album);
            }
            else
            {
                printf("Album inesistente.\n");
            }
            break;

        case 4://Sair

            break;
        }
    }
    return 0;
}
