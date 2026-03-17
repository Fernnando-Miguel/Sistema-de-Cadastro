#include <stdio.h>

struct Usuario {
    int id;
    int idade;
    char nome[70];
    char email[70];
};

struct Usuario usuario;

void cadastrar_usuario() {
    printf("====Cadastrando====\n");

    printf("Digite seu ID: \n");
    scanf("%d", &usuario.id);

    printf("Digite seu nome: \n");
    scanf(" %[^\n]", usuario.nome);

    printf("Digite sua idade: \n");
    scanf("%d", &usuario.idade);

    printf("Digite seu e-mail: \n");
    scanf(" %[^\n]", usuario.email);
}
void mostrar_usuario() {
    printf("====Mostrando Usuarios====\n");

    printf("ID: %d\n Nome: %s\n Idade: %d\n E-mail: %s\n",
    usuario.id,
    usuario.nome,
    usuario.idade,
    usuario.email);
}

int main() {
    int opcao = 0;

    while (opcao != 3) {
        printf("1. Cadastrar Usuario \n");
        printf("2. Mostrar Usuarios cadastrados \n");
        printf("3. Sair \n");
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

        printf("Encerrando Programa... \n");

        break;

        default:

        printf("Opcao invalida\n");

    }
}

    return 0;
}