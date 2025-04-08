#ifndef TESTEGC_H_INCLUDED
#define TESTEGC_H_INCLUDED



#endif // TESTEGC_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Cliente
struct Cliente {
    char nome[50];
    int idade;
    char email[50];
};

// Função para cadastrar um novo cliente
void cadastrarCliente() {
    struct Cliente cliente;

    printf("Nome: ");
    scanf("%s", cliente.nome);
    printf("Idade: ");
    scanf("%d", &cliente.idade);
    printf("E-mail: ");
    scanf("%s", cliente.email);

    FILE *file = fopen("clientes.txt", "a");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    fprintf(file, "%s %d %s\n", cliente.nome, cliente.idade, cliente.email);
    fclose(file);
}

// Função para exibir a lista de clientes
void listarClientes() {
    struct Cliente cliente;
    FILE *file = fopen("clientes.txt", "r");
    if (file == NULL) {
        printf("Nenhum cliente cadastrado.\n");
        return;
    }

    printf("Lista de clientes:\n");
    while (fscanf(file, "%s %d %s", cliente.nome, &cliente.idade, cliente.email) != EOF) {
        printf("Nome: %s\n", cliente.nome);
        printf("Idade: %d\n", cliente.idade);
        printf("E-mail: %s\n", cliente.email);
    }
    fclose(file);
}

int main() {
    int escolha;
    do {
        printf("\n1. Cadastrar cliente\n");
        printf("2. Listar clientes\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                listarClientes();
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 3);

    return 0;
}
