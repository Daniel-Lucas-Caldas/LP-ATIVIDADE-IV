#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define QUANT 5

struct dados_alunos {
    char nome[200];
    char dataDeNascimento[200];
};

float calcularMedia(float notas[]) {
    float soma, media;
    int i;

    for (i = 0; i < 2; i++) {
        soma += notas[i];
    }

    media = soma / 2;

    return media;
}

char *situacao(float media) {
    char situacao[200];

    if (media >= 7) {
        strcpy(situacao, "Aprovado");
    } else {
        strcpy(situacao, "Reprovado");
    }

    return situacao;
}

int main() {
    float notas[2], mediaFinal;
    int i, j;

    struct dados_alunos alunos[QUANT];

    for (i = 0; i < QUANT; i++) {
        printf("Digite o seu nome: \n");
        gets(alunos[i].nome);

        printf("Digite a sua data de nascimento - (DD/MM/AAAA): \n");
        gets(alunos[i].dataDeNascimento);

        for (j = 0; j < 2; j++) {
            printf("Informe a sua %dª nota: \n", j + 1);
            scanf("%f", &notas[j]);
        }

        mediaFinal = calcularMedia(notas);

        printf("A sua média é: %.1f \n", mediaFinal);
        printf("Situação do aluno: %s \n", situacao(mediaFinal));
        printf("\n");
        fflush(stdin);
    }

    return 0;
}
