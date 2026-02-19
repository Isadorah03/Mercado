#include <stdio.h>
#include <stdlib.h>

int main() {

    char nomes[6][30] = {
        "Arroz",
        "Feijao",
        "Macarrao",
        "Leite",
        "Cafe",
        "Acucar"
    };

    float precos[6] = {5.50, 7.00, 4.20, 3.80, 12.00, 4.90};

    int carrinho[10];
    int qtdCarrinho = 0;

    int opcao;
    int escolha;

    while (1) {

        printf("\n==== MERCADO ====\n");
        printf("1 - Comprar\n");
        printf("2 - Ver carrinho\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {

        case 1:

            printf("\n=== PRODUTOS ===\n");
            printf("Maximo de produtos no carrinho: %d\n\n", 10);

            for (int i = 0; i < 6; i++) {
                printf("%d - %s - R$ %.2f\n", i+1, nomes[i], precos[i]);
            }

            printf("\nEscolha o numero do produto: ");
            scanf("%d", &escolha);

            carrinho[qtdCarrinho] = escolha - 1;
            qtdCarrinho++;

            printf("Produto adicionado!\n");
            break;


        case 2: {
            float total = 0;

            printf("\n=== CARRINHO ===\n");

            for (int i = 0; i < qtdCarrinho; i++) {
                int id = carrinho[i];
                printf("%s - R$ %.2f\n", nomes[id], precos[id]);
                total += precos[id];
            }

            printf("Total: R$ %.2f\n", total);
            break;
        }


        case 3:
            printf("Saindo...\n");
            return 0;


        default:
            printf("Opcao invalida\n");
        }
    }

    return 0;
}