#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#define SIZE 200
#define MAX_CLIENTES 30
#define MAX_FUNCIONARIOS 30
char usuario[SIZE] [40];
char cliente[SIZE] [40];
char nome[SIZE] [40];
char nome2[SIZE] [40];
char email[SIZE] [40];
char empresa[SIZE] [40];
char senha[SIZE] [40];
char responsavel[SIZE] [40];
char razaosocial[SIZE] [40];
char nomefantasia[SIZE] [40];
char endereco1[SIZE] [40];
char endereco2[SIZE] [40];
char data [SIZE] [20];
char rua [SIZE] [20];
char rua2 [SIZE] [20];
char bairro [SIZE] [20];
char bairro2 [SIZE] [20];
char cidade [SIZE] [20];
char cidade2 [SIZE] [20];
char estado [SIZE] [20];
char estado2 [SIZE] [20];
char cep [SIZE] [20];
char cep2 [SIZE] [20];
int opcao;
int opcao2;
int opcao3;
int opcao4;
int opcao5;
int escolha;
int numero;
int numero2;
int numero3;
int numero4;
int numero5;
int numero6;
int numero7;
int numero8;
int numero9;
int numerocasa;
char numerocasa2;
int numerocadastro;
int Menu;
int MenuGC;
char telefone1;
char telefone2;
char cnpj [SIZE] [14];
int datadeabertura [SIZE] [8];
char datadeabertura2 [SIZE] [8];
char registrofuncional [SIZE] [8];
int i;


struct Cliente {
    char nome[50];
    char responsavel[50];
    char empresa[50];
    char cnpj[14];
    char razaosocial[50];
    char nomefantasia[50];
    char telefone1[15];
    char rua[50];
    char numerocasa[10];
    char endereco[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char cep[10];
    char email[50];
    char datadeabertura[8];
    int id;
};

struct Funcionario {
    char registrofuncional[8];
    char nome2[50];
    char cpf2[14];
    char telefone2[15];
    char rua2[50];
    char numerocasa2[10];
    char endereco2[50];
    char bairro2[50];
    char cidade2[50];
    char estado2[50];
    char cep2[10];
    char email2[50];
    char datadeabertura2[8];
    int id;
};

int main(int argc, char *argv[])

{
    setlocale(LC_ALL, "Portuguese");
    FILE *arquivo;
    FILE *arq;
    char Str[50];
    char texto_str[2000];
    char nomeArquivo[50];
    int opcao;
    struct Cliente cliente;
    struct Funcionario funcionario;


    do{
        system("cls");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("                                                MENU DO SISTEMA\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("   1-Login\n\n");
        printf("   2-Cadastro de clientes\n\n");
        printf("   3-Cadastro de funcionarios\n\n");
        printf("   4-Relatorios Importantes\n\n");
        printf("   5-Outros Relatorios\n\n");
        printf("   6-Consulta e Gerenciamento\n\n");
        printf("   7-Sair do Sistema\n\n");
        printf("------------------------------------------------------------------------------------------------------------------------\n\n");
        printf("\n   Escolha a opcao desejada: ");
        scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        LOGIN\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Digite seu usuario\n");
            fflush(stdin);
            scanf("%s", &usuario);
            printf("Digite sua senha\n");
            fflush(stdin);
            scanf("%s", &senha);
            system("pause");
            break;

{
        case 2:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        CADASTRO DE CLIENTES\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");


            void cadastrarCliente(FILE *arquivo, struct Cliente cliente) {

                fwrite(&cliente, sizeof(struct Cliente), 1, arquivo);
                printf("Cliente cadastrado com sucesso.\n");
            }


            void exibirClientes(FILE *arquivo) {
                system("cls");
                struct Cliente cliente;

                // Move o ponteiro do arquivo para o início
                rewind(arquivo);

                printf("\nLista de Clientes:\n");
                while (fread(&cliente, sizeof(struct Cliente), 1, arquivo) == 1) {
                    printf("Nome: %s\n", cliente.nome);
                    printf("Responsavel: %s\n", cliente.responsavel);
                    printf("Empresa: %s\n", cliente.empresa);
                    printf("CNPJ: %s\n", cliente.cnpj);
                    printf("Razao social: %s\n", cliente.razaosocial);
                    printf("Nome fantasia: %s\n", cliente.nomefantasia);
                    printf("Telefone: %s\n", cliente.telefone1);
                    printf("Rua: %s\n", cliente.rua);
                    printf("Numero: %s\n", cliente.numerocasa);
                    printf("Bairro: %s\n", cliente.bairro);
                    printf("Cidade: %s\n", cliente.cidade);
                    printf("Estado: %s\n", cliente.estado);
                    printf("CEP: %s\n", cliente.cep);
                    printf("Email: %s\n", cliente.email);
                    printf("Data de abertura: %s\n", cliente.datadeabertura);
                    printf("\n");
                }
            }

            arquivo = fopen("clientes.txt", "a+");

                if (arquivo == NULL) {
                    perror("Erro ao abrir o arquivo");
                    exit(EXIT_FAILURE);
                }

                do {
                    printf("1. Adicionar Cliente\n");
                    printf("2. Listar Clientes\n");
                    printf("3. Sair\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao2);

                    switch (opcao2) {
                        case 1:
                            system("cls");
                            // Adicionar cliente
                            printf("Nome: ");
                            scanf("%s", cliente.nome);
                            fflush(stdin);

                            printf("Responsavel: ");
                            scanf("%s", cliente.responsavel);
                            fflush(stdin);

                            printf("Empresa: ");
                            scanf("%s", cliente.empresa);
                            fflush(stdin);

                            printf("CNPJ: ");
                            scanf("%s", &cliente.cnpj);
                            fflush(stdin);

                            printf("Razao social: ");
                            scanf("%s", cliente.razaosocial);
                            fflush(stdin);

                            printf("Nome fantasia: ");
                            scanf("%s", cliente.nomefantasia);
                            fflush(stdin);

                            printf("Telefone: ");
                            scanf("%s", &cliente.telefone1);
                            fflush(stdin);

                            printf("Rua: ");
                            scanf("%s", cliente.rua);
                            fflush(stdin);

                            printf("Numero: ");
                            scanf("%s", &cliente.numerocasa);
                            fflush(stdin);

                            printf("Bairro: ");
                            scanf("%s", cliente.bairro);
                            fflush(stdin);

                            printf("Cidade: ");
                            scanf("%s", cliente.cidade);
                            fflush(stdin);

                            printf("Estado: ");
                            scanf("%s", cliente.estado);
                            fflush(stdin);

                            printf("CEP: ");
                            scanf("%s", &cliente.cep);
                            fflush(stdin);

                            printf("Email: ");
                            scanf("%s", cliente.email);
                            fflush(stdin);

                            printf("Data de abertura: ");
                            scanf("%s", &cliente.datadeabertura);
                            fflush(stdin);

                            cadastrarCliente(arquivo, cliente);
                            break;
                        case 2:
                            // Listar clientes
                            exibirClientes(arquivo);
                            break;

                        case 3:
                            // Sair
                            printf("Até logo!!!.\n");
                            return 0;

                        default:
                            printf("Opcao invalida. Tente novamente.\n");
                    }
                } while (opcao2 != 3);

                // Fecha o arquivo
                fclose(arquivo);

                return 0;
                break;

        case 3:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        CADASTRO DE FUNCIONARIOS\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");

            void cadastrarFuncionario(FILE *arquivo, struct Funcionario funcionario) {

                fwrite(&funcionario, sizeof(struct Funcionario), 1, arquivo);
                printf("Funcionario cadastrado com sucesso.\n");
            }


            void exibirFuncionario(FILE *arquivo) {
                system("cls");
                struct Funcionario funcionario;

                // Move o ponteiro do arquivo para o início
                rewind(arquivo);

                printf("\nLista de Funcionarios:\n");
                while (fread(&funcionario, sizeof(struct Funcionario), 1, arquivo) == 1) {
                        printf("Registro funcional: %s\n", funcionario.registrofuncional);
                        printf("Nome: %s\n", funcionario.nome2);
                        printf("CPF: %s\n", funcionario.cpf2);
                        printf("Telefone: %s\n", funcionario.telefone2);
                        printf("Rua: %s\n", funcionario.rua2);
                        printf("Numero: %s\n", funcionario.numerocasa2);
                        printf("Bairro: %s\n", funcionario.bairro2);
                        printf("Cidade: %s\n", funcionario.cidade2);
                        printf("Estado: %s\n", funcionario.estado2);
                        printf("CEP: %s\n", funcionario.cep2);
                        printf("Email: %s\n", funcionario.email2);
                        printf("Data de Abertura: %s\n", funcionario.datadeabertura2);
                        printf("\n");
                }
            }

            arquivo = fopen("funcionarios.txt", "a+");

                if (arquivo == NULL) {
                    perror("Erro ao abrir o arquivo");
                    exit(EXIT_FAILURE);
                }

                do {
                    printf("1. Adicionar Funcionario\n");
                    printf("2. Listar Funcionarios\n");
                    printf("3. Sair\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao5);

                    switch (opcao5) {
                        case 1:
                            system("cls");
                            // Adicionar funcionario
                                printf("Registro Funcional: ");
                                scanf("%s", &funcionario.registrofuncional);
                                fflush(stdin);

                                printf("Nome: ");
                                scanf("%s", funcionario.nome2);
                                fflush(stdin);

                                printf("CPF: ");
                                scanf("%s", &funcionario.cpf2);
                                fflush(stdin);

                                printf("Telefone: ");
                                scanf("%s", &funcionario.telefone2);
                                fflush(stdin);

                                printf("Endereco:\n");
                                printf("Rua: ");
                                scanf("%s", funcionario.rua2);
                                fflush(stdin);

                                printf("Numero: ");
                                scanf("%s", &funcionario.numerocasa2);
                                fflush(stdin);

                                printf("Bairro: ");
                                scanf("%s", funcionario.bairro2);
                                fflush(stdin);

                                printf("Cidade: ");
                                scanf("%s", funcionario.cidade2);
                                fflush(stdin);

                                printf("Estado: ");
                                scanf("%s", funcionario.estado2);
                                fflush(stdin);

                                printf("CEP: ");
                                scanf("%s", &funcionario.cep2);
                                fflush(stdin);

                                printf("Email: ");
                                scanf("%s", funcionario.email2);
                                fflush(stdin);

                                printf("Data de abertura: ");
                                scanf("%s", &funcionario.datadeabertura2);
                                fflush(stdin);

                            cadastrarFuncionario(arquivo, funcionario);
                            break;

                        case 2:
                            // Listar funcionarios
                            exibirFuncionario(arquivo);
                            break;

                        case 3:
                            // Sair
                            printf("Até logo!!!.\n");
                            return 0;

                        default:
                            printf("Opcao invalida. Tente novamente.\n");
                    }
                } while (opcao5 != 3);

                // Fecha o arquivo
                fclose(arquivo);

                return 0;
                break;

         case 4:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        RELATORIOS IMPORTANTES\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            system("cls");
                    printf("   1-Relatorio Mensal\n\n");
                    printf("   2-Relatorio Semestral\n\n");
                    printf("   3-Relatorio Global\n\n");
                    printf("   4-Relatorio Anual\n\n");
                    printf("   5-Criar Relatorio\n\n");
                    printf("\n   Escolha a opcao desejada: ");
                    scanf("%d", &opcao2);

            switch(opcao2)

            {

            case 1:
            system("cls");
            arq = fopen("Relatorio Mensal.txt", "r");
            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            break;

            case 2:
            system("cls");
            arq = fopen("Relatorio Semestral.txt", "r");
            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            break;

            case 3:
            system("cls");
            arq = fopen("Relatorio Global.txt", "r");
            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            system("pause");
            break;

            case 4:
            system("cls");
            arq = fopen("Relatorio Anual.txt", "r");
            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            system("pause");
            break;

            case 5:
            system("cls");
            printf("Relatorio criado com sucesso: \n");
            arq = fopen("NovoRelatorio.txt", "a");
            fclose(arq);
            system("pause");
            break;

            while(opcao2 !=5);
            system("pause");

            }

            break;

         case 5:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        OUTROS RELATORIOS\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            system("cls");
            printf("   1-Criar Relatorio\n\n");
            printf("   2-Relatorio ambiental\n\n");
            printf("   3-Manifesto de Transporte de Residuos\n\n");
            printf("   4-Relatorio de impactos ambientais\n\n");
            printf("\n   Escolha a opcao desejada: ");
            scanf("%d", &opcao3);

            switch(opcao3)

            {
            case 1:
                system("cls");
                    system("cls");
                    printf("Relatorio criado com sucesso: \n");
                    arq = fopen("NovoRelatorio.txt", "a");
                    fclose(arq);

                    system("pause");
                    break;

            case 2:
            system("cls");
            arq = fopen("Relatorio ambiental.txt", "r");

            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            break;

            case 3:
            system("cls");
            printf("Somente pessoal autorizado pode acessar\n");
            printf("Digite a senha para desbloqueio:\n");
            fflush(stdin);
            scanf("%s", &senha);

            arq = fopen("Manifesto de Transporte de Residuos MTR.txt", "r");

            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            system("pause");
            break;

            case 4:
            system("cls");
            arq = fopen("Relatorio de impactos ambientais.txt", "r");

            while(fgets(texto_str, 1000, arq) != NULL)
            {
                printf("%s", texto_str);
            }
            fclose(arq);
            getch();
            system("pause");
            break;

            while(opcao3 !=3);
            system("pause");

            }

            break;

        case 6:
            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        CONSULTA E GERENCIAMENTO\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Deseja consultar quais informações \n");
            printf("1-Cadastros  \n");
            printf("2-Relatórios \n");
            printf("3-Criar novo Relatorio \n");
            printf("4-Excluir Relatorio \n");
            printf("5-Excluir Cadastros  \n");
            printf("\n   Escolha a opcao desejada: ");
            scanf("%d", &numero2);


            void exibirClientes2(FILE *arquivo) {
                system("cls");
                struct Cliente cliente;

                // Move o ponteiro do arquivo para o início
                rewind(arquivo);

                printf("\nLista de Clientes:\n");
                while (fread(&cliente, sizeof(struct Cliente), 1, arquivo) == 1) {
                    printf("Nome: %s\n", cliente.nome);
                    printf("Responsavel: %s\n", cliente.responsavel);
                    printf("Empresa: %s\n", cliente.empresa);
                    printf("CNPJ: %s\n", cliente.cnpj);
                    printf("Razao social: %s\n", cliente.razaosocial);
                    printf("Nome fantasia: %s\n", cliente.nomefantasia);
                    printf("Telefone: %s\n", cliente.telefone1);
                    printf("Rua: %s\n", cliente.rua);
                    printf("Numero: %s\n", cliente.numerocasa);
                    printf("Bairro: %s\n", cliente.bairro);
                    printf("Cidade: %s\n", cliente.cidade);
                    printf("Estado: %s\n", cliente.estado);
                    printf("CEP: %s\n", cliente.cep);
                    printf("Email: %s\n", cliente.email);
                    printf("Data de abertura: %s\n", cliente.datadeabertura);
                    printf("\n");
                }
            }

            void exibirFuncionario2(FILE *arquivo) {
                system("cls");
                struct Funcionario funcionario;

                // Move o ponteiro do arquivo para o início
                rewind(arquivo);

                printf("\nLista de Funcionarios:\n");
                while (fread(&funcionario, sizeof(struct Funcionario), 1, arquivo) == 1) {
                        printf("Registro funcional: %s\n", funcionario.registrofuncional);
                        printf("Nome: %s\n", funcionario.nome2);
                        printf("CPF: %s\n", funcionario.cpf2);
                        printf("Telefone: %s\n", funcionario.telefone2);
                        printf("Rua: %s\n", funcionario.rua2);
                        printf("Numero: %s\n", funcionario.numerocasa2);
                        printf("Bairro: %s\n", funcionario.bairro2);
                        printf("Cidade: %s\n", funcionario.cidade2);
                        printf("Estado: %s\n", funcionario.estado2);
                        printf("CEP: %s\n", funcionario.cep2);
                        printf("Email: %s\n", funcionario.email2);
                        printf("Data de Abertura: %s\n", funcionario.datadeabertura2);
                        printf("\n");
                }
            }

            switch(numero2)
            {
                case 1:

                do {

                    printf("1. Listar Clientes\n");
                    printf("2. Listar Funcionarios\n");
                    printf("3. Sair\n");
                    printf("4. Voltar ao Menu Inicial\n");
                    printf("Escolha uma opcao: ");
                    scanf("%d", &opcao2);
                    system("cls");

                    switch (opcao2) {

                        case 1:
                            // Listar clientes

                            arquivo = fopen("clientes.txt", "a+");

                            if (arquivo == NULL) {
                                perror("Erro ao abrir o arquivo");
                                exit(EXIT_FAILURE);
                            }
                            exibirClientes2(arquivo);
                            rewind(arquivo);
                            break;

                        case 2:
                            arquivo = fopen("funcionarios.txt", "a+");

                            if (arquivo == NULL) {
                                perror("Erro ao abrir o arquivo");
                                exit(EXIT_FAILURE);
                            }
                            exibirFuncionario2(arquivo);
                            rewind(arquivo);
                            break;

                        case 3:
                            // Sair
                            printf("Até logo!!!.\n");
                            return 0;

                        case 4:

                            break;

                        default:
                            printf("Opcao invalida. Tente novamente.\n");
                    }
                } while (opcao2 != 4);

                // Fecha o arquivo
                fclose(arquivo);

                return 0;
                break;


                    break;

                case 2:
                    system("cls");
                    printf("Listando Relatorios disponiveis: \n");
                    printf("1 Relatorio Mensal \n");
                    printf("2 Relatorio Semestral \n");
                    printf("3 Relatorio Global \n");
                    printf("4 Relatorio Anual \n");
                    printf("5 Relatorio Ambiental \n");
                    printf("6 Manifesto de Transporte de Residuos MTR \n");
                    printf("7 Relatorio de impactos ambientais \n");
                    printf("\n   Escolha a opcao desejada: ");
                    scanf("%d", &numero6);

                    switch(numero6)
                    {

                        case 1:
                        system("cls");
                        arq = fopen("Relatorio Mensal.txt", "r");
                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 2:
                        system("cls");
                        arq = fopen("Relatorio Semestral.txt", "r");
                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 3:
                        system("cls");
                        arq = fopen("Relatorio Global.txt", "r");
                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 4:
                        system("cls");
                        arq = fopen("Relatorio Anual.txt", "r");
                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 5:
                        system("cls");
                        arq = fopen("Relatorio ambiental.txt", "r");

                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 6:
                        system("cls");
                        printf("Somente pessoal autorizado pode acessar\n");
                        printf("Digite a senha para desbloqueio:\n");
                        fflush(stdin);
                        scanf("%s", &senha);

                        arq = fopen("Manifesto de Transporte de Residuos MTR.txt", "r");

                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();
                        break;

                        case 7:
                        system("cls");
                        arq = fopen("Relatorio de impactos ambientais.txt", "r");

                        while(fgets(texto_str, 1000, arq) != NULL)
                        {
                            printf("%s", texto_str);
                        }
                        fclose(arq);
                        getch();


                    }

                        system("pause");
                        break;
                case 3:
                    system("cls");
                    printf("Relatorio criado com sucesso: \n");
                    arq = fopen("NovoRelatorio.txt", "a");
                    fclose(arq);

                    system("pause");
                    break;

                case 4:
                    system("cls");
                    printf("Somente pessoal autorizado pode acessar\n");
                    printf("Digite a senha para desbloqueio:\n");
                    fflush(stdin);
                    scanf("%s", &senha);
                    printf("Digite o nome do relatorio a ser excluído: ");
                    scanf("%s", nomeArquivo);
                    system("cls");

                    if (remove(nomeArquivo) == 0) {
                        printf("Relatorio excluído com sucesso.\n");
                    } else {
                        printf("Erro ao excluir o Relatorio.\n");
                    }

                case 5:
                    system("cls");
                    printf("Somente pessoal autorizado pode acessar\n");
                    printf("Digite a senha para desbloqueio:\n");
                    fflush(stdin);
                    scanf("%s", &senha);
                    printf("Digite o nome do arquivo de cadastro a ser excluído: ");
                    scanf("%s", nomeArquivo);
                    system("cls");

                    if (remove(nomeArquivo) == 0) {
                        printf("Cadastro excluído com sucesso.\n");
                    } else {
                        printf("Erro ao excluir o Cadastro.\n");
                    }

                }
                break;

        case 7:

            system("cls");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("                                                        SAIR DO SISTEMA\n\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n\n");
            printf("Deseja realmente sair do sistema? \n");
            printf("1-Sim 2-Nao \n");
            printf("\n   Escolha a opcao desejada: ");
            scanf("%d", &numero3);
            printf("\n\n" );

            switch(numero3)
            {
                case 1:

                    printf("\n Até logo!!! \n\n\n");
                    system("pause");
                    return(0);

                case 2:

                    printf("\n\n Retornar ao Menu Principal? \n\n\n");
                    printf("1-Sim 2-Nao \n");
                    printf("\n   Escolha a opcao desejada: ");
                    scanf("%d", &numero4);
                    if(numero4 != 1)
                    {
                        printf("\n   Saindo do sistema \n ");
                        return(0);
                    }
                        system("pause");


            }

                    default:
                        printf("opcao invalida\n");
                    break;
    }

    }


}                   while (opcao != 8);
                        system("pause");
                        return(0);
}









