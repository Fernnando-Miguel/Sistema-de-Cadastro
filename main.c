#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define MAX 100

struct Usuario {
    int id;
    int idade;
    char nome[70];
    char email[70];
};

struct Usuario usuarios[MAX];
int total = 0;

void cadastrar_usuario() {
    printf("\n ==== Cadastro do Usuário ====\n");

    printf("Digite seu ID: ");
    scanf("%d", &usuarios[total].id);
    while (getchar() != '\n');

    printf("Digite seu nome: ");
    fgets(usuarios[total].nome, 70, stdin);
    usuarios[total].nome[strcspn(usuarios[total].nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &usuarios[total].idade);
    while (getchar() != '\n');

    printf("Digite seu e-mail: ");
    fgets(usuarios[total].email, 70, stdin);
    usuarios[total].email[strcspn(usuarios[total].email, "\n")] = '\0';

    total++;
}

void mostrar_usuario() {
    if (total == 0) {
        printf("Nenhum usuário cadastrado!\n");
        return;
    }

    printf("\n ==== Usuários cadastrados ====\n");

    for (int i = 0; i < total; i++) {
        printf("\nID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Idade: %d\n", usuarios[i].idade);
        printf("Email: %s\n", usuarios[i].email);
    }
}

void menu() {
    int opcao = 0;

    while (opcao != 3) {
        printf("\n ==== MENU ==== \n");
        printf("1- Cadastrar Usuário \n");
        printf("2- Mostrar Usuários \n");
        printf("3- Sair \n");
        printf("Escolha: ");

        scanf("%d", &opcao);
        while (getchar() != '\n');

        switch (opcao) {
            case 1:
                cadastrar_usuario();
                break;
            case 2:
                mostrar_usuario();
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    }
}

int main() {
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    menu();
    return 0;
}