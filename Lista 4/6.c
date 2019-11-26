
/*Crie um programa em C que salve em um arquivo binário 6.bin os dados de
5 funcionários:
○ nome (tamanho máximo 30);
○ profissão (tamanho máximo 30);
○ Sexo (‘m’ para masculino e ‘f’ para feminino).
○ Salário.
Antes de fechar o arquivo, deve-se ler os dados do terceiro funcionário do
arquivo binário e exibí-los em tela. Após a exibição dos dados, o arquivo deve ser fechado e encerrado.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct funcionarios
{
    char nome[30];
    char profissao[30];
    char sexo;
    float salario;

} funcionarios;

int main()
{

    int i, cont=0;
    char aux;
    funcionarios func[5];

    FILE *arquivo;

    arquivo = fopen("6.bin","w+b");

    /*abre um arquivo binário para leitura e gravação. Se o arquivo
    existir, o conteúdo anterior é destruído. Caso contrário o arquivo será
    criado.*/

    if(arquivo == NULL)
    {
        printf("Erro!");
        return 0;
    }

    //ESCREVE OS DADOS DOS FUNCIONARIOS
    for(i=0; i<5; i++)
    {
        printf("Nome: ");
        scanf("%[^\n]s", func[i].nome);
        getchar();
        printf("Profissao: ");
        scanf("%[^\n]s", func[i].profissao);
        getchar();
        printf("Sexo: ");
        scanf("%c", &func[i].sexo);
        getchar();
        printf("Salario: ");
        scanf("%f", &func[i].salario);
        getchar();
        printf("\n");

        fwrite(&func, sizeof(funcionarios), 1, arquivo);//para escrever no arquivo binario
    }

    // fread para ler um arquivo binario(para imprimir)

    fread(&func, sizeof(funcionarios), 1, arquivo) ;

    printf("Nome: %s\nProfissao: %s\nSexo: %c\nSalario: %.2f\n",func[2].nome, func[2].profissao, func[2].sexo, func[2].salario);

    fclose(arquivo);

    return 0;
}
