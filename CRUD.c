#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"Portuguese");
    int UserOp;
    int codigo;
    char nome[50];
    char importancia[10];
    float valor;

    for (;;) {
        // Menu principal
        printf("\n ------Menu-----\n");
        printf("1 - criar Objeto\n");
        printf("2 - Listar Objetos\n");
        printf("3 - sair \n");
        printf("Digite sua opcao: \n");
        scanf("%d", &UserOp);

        // Opções do Usuário
        switch (UserOp) {
        case 1:
            printf("Digite o Codigo do objeto\n");
            scanf("%d", &codigo);
            printf("Digite o nome do objeto: \n");
            scanf("%s", nome);
            printf("Digite a importancia do objeto (Pifia, Media, Importante): \n");
            scanf("%s", importancia);
            printf("Digite o valor(sem casa decimal)\n");
            scanf("%f", &valor);
            break;

        case 2:
            printf("Objeto salvo, Nome: %s, Codigo: %d, Importancia: %s, Valor: %.2f\n", nome, codigo, importancia, valor);
            break;

        case 3:
            printf("\n---fim---\n");
            return 0;
        }
    }
    return 0;
}