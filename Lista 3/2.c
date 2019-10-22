/*
(Discoteca) Crie um programa em C que registra informações das músicas de um álbum musical. Um álbum pode ser caracterizado
pelos seguintes dados: nome (tamanho máximo de 25 caracteres), gênero musical (tamanho máximo de 25 caracteres), quantidade
de músicas (máximo de 10 músicas) e um vetor de músicas. Uma música é caracterizada por: número da música (incremental,
sendo zero a primeira música do disco), nome (tamanho máximo de 25 caracteres), duração da música (formato da string: MM:SS). O
programa deve exibir a todo momento as seguintes opções:

1 - Criar um álbum músical
2 - Adicionar música ao álbum
3 - Listar músicas do álbum
4 - Sair

A opção 1 só pode ser escolhida uma única vez, enquanto as opções 2 e 3 só podem ser escolhidas após a criação do álbum.
Caso a opção 1 seja escolhida mais de uma vez, o atual álbum deve ser apagado e inserido informações sobre o novo álbum.
A opção 2 deve exibir mensagem de erro, caso o usuário tente adicionar mais de 10 músicas. Já na opção 3, deve-se listar
em ordem crescente (a partir do número da música) o número da música, nome e duração da música. Por fim,
a opção 4 encerra o programa.*/

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

void criar_album(struct album_musical album)//Criar um álbum músical
{
    int i;

    printf("Digite o nome do album:\n");
    scanf("%[^\n]s", album.nome);//string não precisa de &
    getchar();

    printf("Digite o genero do album:\n");
    scanf("%[^\n]s", album.genero);//string não precisa de &
    getchar();
}

void add_musicas(struct album_musical *album)//Adicionar música ao álbum
{
    int i=0;

    i = (*album).quant_musica;

    if(i <= 3)//10
    {
        printf("Digite nome da %d musica\n", i);
        scanf("%[^\n]s", &(*album).musicas[i].nome); //????????????
        getchar();

        printf("Digite o tempo de duração da %d musica(MM:SS)\n", i);
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
        case 1://Criar um álbum músical

            criar_album(album);
            aux=1;
            break;

        case 2://Adicionar música ao álbum

            if(aux == 1)
            {
                add_musicas(&album);
            }
            else
            {
                printf("Album inesistente.\n");
            }
            break;

        case 3://Listar músicas do álbum

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
