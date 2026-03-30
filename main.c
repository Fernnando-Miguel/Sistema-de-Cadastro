#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

struct Usuario {
    int id;
    int idade;
    char nome[70];
    char email[70];
};
    struct Usuario usuario;
bool cadastrado = false;

void cadastrar_usuario() {
    printf("\n ==== Cadastro do Usuario ====\n");

    printf("Digite seu ID: \n");
    scanf("%d", &usuario.id);
    while (getchar() != '\n');

    printf("Digite seu nome: \n");
    fgets(usuario.nome, 70, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = '\0';

    printf("Digite sua idade: \n");
    scanf("%d", &usuario.idade);
    while (getchar() != '\n');
    

    printf("Digite seu e-mail: \n");
    fgets(usuario.email, 70, stdin);
    usuario.email[strcspn(usuario.email, "\n")] = '\0';

    cadastrado = true;
}
void mostrar_usuario() {

    if (!cadastrado) {
        printf("Nenhum usuario cadastrado! \n");
        return;
    } else {

    printf("\n ==== Dados do Usuario ==== \n");

    printf("ID: %d\n Nome: %s\n Idade: %d\n E-mail: %s\n",
    usuario.id,
    usuario.nome,
    usuario.idade,
    usuario.email);

    }
}

int main() {
      SetConsoleOutputCP(65001);
    setlocale (LC_ALL, "pt_BR.UTF-8");
    int opcao = 0;

    while (opcao != 3) {
        printf("\n ==== MENU ==== \n");
        printf("1- Cadastrar Usuário \n");
        printf("2- Mostrar Usuario(s) cadastrados \n");
        printf("3- Sair \n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    switch (opcao) {

        case 1:

        cadastrar_usuario();

        break;

        case 2:

        mostrar_usuario();

        break;

        case 3:

        printf("\n Encerrando Programa... \n");

        break;

        default:

        printf("\n Opcao invalida\n");

    }
}

    return 0;
}