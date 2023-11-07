#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int UserOp;
    int codigo = 0;
    char nome[50];
    char importancia[20]; "
    float valor = 0.0; 

    for (;;) {
        // Menu principal
        printf("\n------ Menu -----\n");
        printf("1 - Criar Objeto\n");
        printf("2 - Listar Objetos\n");
        printf("3 - Atualizar Objeto\n");
        printf("4 - Deletar Objeto\n");
        printf("5 - Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &UserOp);

        switch (UserOp) {
        case 1:
            printf("Digite o Código do objeto: ");
            scanf("%d", &codigo);
            printf("Digite o nome do objeto: ");
            scanf("%s", nome);
            printf("Digite a importância do objeto (Pifia, Media, Importante): ");
            scanf("%s", importancia);
            printf("Digite o valor (com casas decimais): ");
            scanf("%f", &valor);
            break;

        case 2:
            printf("Objeto salvo:\n");
            printf("Nome: %s\n", nome);
            printf("Código: %d\n", codigo);
            printf("Importância: %s\n", importancia);
            printf("Valor: %.2f\n", valor);
            break;

        case 3:
            printf("Objeto a ser atualizado:\n");
            printf("Nome: %s\n", nome);
            printf("Código: %d\n", codigo);
            printf("Importância: %s\n", importancia);
            printf("Valor: %.2f\n", valor);

            printf("Escolha o que deseja atualizar:\n");
            printf("1 - Atualizar nome\n");
            printf("2 - Atualizar código\n");
            printf("3 - Atualizar importância\n");
            printf("4 - Atualizar valor\n");

            int opcaoAtualizacao;
            scanf("%d", &opcaoAtualizacao);

            switch (opcaoAtualizacao) {
                case 1:
                    printf("Digite o novo nome: ");
                    scanf("%s", nome);
                    break;

                case 2:
                    printf("Digite o novo código: ");
                    scanf("%d", &codigo);
                    break;

                case 3:
                    printf("Digite a nova importância: ");
                    scanf("%s", importancia);
                    break;

                case 4:
                    printf("Digite o novo valor: ");
                    scanf("%f", &valor);
                    break;

                default:
                    printf("Opção de atualização inválida.\n");
            }
            break;

        case 4:

        codigo = 0;
        nome[0] = '\0'; 
        importancia[0] = '\0'; 
        valor = 0.0; // 
        printf("Objeto deletado.\n");
        break;

        case 5:
            return 0; 
        }
    }
    return 0;
}
