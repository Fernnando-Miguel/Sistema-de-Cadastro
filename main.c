#include <stdio.h>

struct Usuario {
    int id;
    int idade;
    char nome[70];
    char email[70];
};

struct Usuario usuario;
int cadastrado = 0;

void cadastrar_usuario() {
    printf("\n ==== Cadastro do Usuario ====\n");

    printf("Digite seu ID: \n");
    scanf("%d", &usuario.id);
    getchar();

    printf("Digite seu nome: \n");
    scanf(" %[^\n]", usuario.nome);

    printf("Digite sua idade: \n");
    scanf("%d", &usuario.idade);
    getchar();

    printf("Digite seu e-mail: \n");
    scanf(" %[^\n]", usuario.email);

    cadastrado = 1;
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
    int opcao = 0;

    while (opcao != 3) {
        printf("\n ==== MENU ==== \n");
        printf("1- Cadastrar Usuario \n");
        printf("2- Mostrar Usuarios cadastrados \n");
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