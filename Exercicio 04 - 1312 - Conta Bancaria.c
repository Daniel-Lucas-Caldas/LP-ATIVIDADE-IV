#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

const int SALDO = 100;

   struct conta_bancaria{
        char numeroDaConta[200];
        char nomeDoTitular[200];
        char tipoDeConta[200];
    };

    void pesquisarDeposito(float depositarQuantidade) {
        float saldoFinal;
        int i;

       saldoFinal = depositarQuantidade + SALDO;

        printf("valor depositou R$%.2f em sua conta \n", depositarQuantidade);
        printf("Saldo atual: R$%.2f", saldoFinal);
    }

    void pesquisarSaque(float sacarQuantidade) {
        float saldoFinal;
        int i;

       saldoFinal = SALDO - sacarQuantidade;

        printf("valor retirou R$%.2f da sua conta \n", sacarQuantidade);
        printf("Saldo atual: R$%.2f", saldoFinal);
    }

int main () {
	setlocale(LC_ALL, "portuguese");
	
    struct conta_bancaria banco;
    float depositarQuantidade;
    float sacarQuantidade;
    int opcao;

    printf("Digite os seus dados\n");

    printf("Digite o número da conta: ");
    gets(banco.numeroDaConta);

    printf("Digite o nome do titular: ");
    gets(banco.nomeDoTitular);
    
    printf("Digite o tipo de serviço: P - poupança e C - conta corrente: ");
    gets(banco.tipoDeConta);

    system("cls || clear");
    
    printf("\nDigite a opção que deseja realizar\n");

    printf("|----------------Opções-------------------|\n");
    printf("|codigo | alternatinas                    |\n");
    printf("|1      | Realizar desposito              |\n");
    printf("|2      | Realizar saque                  |\n");
    printf("|3      | Mostrar saldo atual  |\n");
    printf("|--------------------Fim------------------|\n");

    printf("opção: ");
	scanf("%i", &opcao);

    if (opcao == 1) {
        printf("Digite o valor que deseja depositar: ");
        scanf("%f", &depositarQuantidade);
        pesquisarDeposito(depositarQuantidade);
    } else if (opcao == 2) {
        printf("Digite o valor que deseja sacar: ");
        scanf("%f", &sacarQuantidade);
        pesquisarSaque(sacarQuantidade);
    } else if (opcao == 3) {
        printf("Saldo atual: R$%.2d", SALDO);
    }  

return 0;
}
