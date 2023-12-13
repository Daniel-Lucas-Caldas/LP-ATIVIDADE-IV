#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 250

struct dados {
    char nome[200], cargo[200];
    float salario;
};

float media(struct dados funcionario[], int total) {
    int contador = 0;
    float soma = 0;

    for (int i = 0; i < total; i++) {
        if (strcmp(funcionario[i].cargo, "programador") == 0) {
            contador++;
            soma += funcionario[i].salario;
        }
    }

    if (contador > 0) {
        return soma / (float)contador;
    } else {
        return 0;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int opcao = 0, i = 0;

    struct dados funcionario[TAM];

    do {
        printf("App Empresa\n");
        printf(" 1 - Adicionar informação\n");
        printf(" 2 - Exibir\n");
        printf(" 3 - Sair do programa\n");
        printf("Resposta: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            fflush(stdin);

            printf("Digite o nome do %dº funcionário: ", i + 1);
            scanf(" %s", funcionario[i].nome);

            printf("Digite o nome do cargo: ");
            scanf(" %s", funcionario[i].cargo);

            printf("Digite o valor do salario: ");
            scanf("%f", &funcionario[i].salario);

            i++; 
            system("cls||clear");
            break;

        case 2:
            printf("Média salarial de Desenvolvedores: R$ %.2f\n", media(funcionario, i));
            break;

        default:
            break;
        }
