#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 250

struct dados {
  char nome[200], cargo[200];
  float salario;
};

float mediaSalario(struct dados funcionario[], int total) {
  int contador = 0;
  float soma = 0;
  int i; 

  for ( i = 0; i < total; i++) {
    if (strcmp(funcionario[i].cargo, "Programador") == 0) {
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
    printf("=====TABELA DE OPÇÕES=====\n");
    printf("1 - Adicionar informação\n2 - Exibir\n3 - Sair do programa\n");
    printf("Digite aqui a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      fflush(stdin);

      printf("Digite o nome do %dº funcionário: ", i + 1);
      scanf(" %s", funcionario[i].nome);

      printf("Informe o  cargo: ");
      scanf(" %s", funcionario[i].cargo);

      printf("Digite o valor do salario: ");
      scanf("%f", &funcionario[i].salario);
      i++;
      
      system("cls||clear");
      break;

    case 2:
      printf("Média salarial de Programadores: R$ %.2f\n",
      mediaSalario(funcionario, i));
      break;

    default:
      break;
    }

  } while (opcao != 3);

  return 0;
}
