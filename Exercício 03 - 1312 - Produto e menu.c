#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct dados_produto {
    char nome[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int estoque, float preco, int quantidadeProduto) {
    int estoqueAtualizado;
    float precoAtualizado;

    estoqueAtualizado = estoque - quantidadeProduto;
    precoAtualizado =  preco * estoqueAtualizado;

    printf("Estoque atual: %d \n",estoqueAtualizado);
    printf("Preço total em estoque: %.1f \n\n",precoAtualizado);
}

int main() {
    setlocale(LC_ALL,"portuguese");
    int opcaoProduto, opcaoLoja, quantidadeProduto;
    float produtoValor;
    char produtoNome[200];

    struct dados_produto produto;

    printf("Deseja registrar um novo produto: 1 - Sim e 2 - Não:\n");
    scanf("%d", &opcaoProduto);

    system("cls||clear");

    switch (opcaoProduto) {
    case 1:
	fflush(stdin);
        printf("Registre o novo produto.\n");

        printf("Digite o nome do novo produto: \n");
        gets(produto.nome);

        printf("Digite o preço do produto: ");
        scanf("%f", &produto.preco);
	fflush(stdin);

        printf("Informe agora a quantidade em estoque: ");
        scanf("%d", &produto.estoque);

        printf("Registro finalizado!");

        system("cls||clear");

        break;

    default:
        break;
    }

    do {
    printf("|--------Opções da loja-------|\n");
    printf("|codigo | alternatinas        |\n");
    printf("|1      | Realizar uma compra |\n");
    printf("|2      | Consultar estoque   |\n");
    printf("|3      | Sair do programa    |\n");
    printf("|---------------Fim-----------|\n");
    
        printf("Informe a opção desejada: ");
        scanf("%d", &opcaoLoja);

        system("cls||clear");
	fflush(stdin);

        switch (opcaoLoja) {
        case 1:
            fflush(stdin);

            printf("Nome do produto: \n");
            gets(produtoNome);

            printf("Digite o valor do produto: ");
            scanf("%f", &produtoValor);

            printf("Quantidade desejada do produto: ");
            scanf("%d", &quantidadeProduto);

            if (quantidadeProduto <= produto.estoque) {
                printf("Compra realizada, agradecemos a preferência \n");
            } else {
                printf("Estoque insuficiente, por favor procure esse produto outro dia.\n");
            }

            break;

        case 2:
            printf("Produto em estoque.");
            printf("\n");
            printf("Nome do produto: %s \n", produto.nome);
            atualizarEstoque(produto.estoque, produto.preco, quantidadeProduto);

            break;

        default:
            break;
        }

    } while (opcao != 3);

    return 0;
}
