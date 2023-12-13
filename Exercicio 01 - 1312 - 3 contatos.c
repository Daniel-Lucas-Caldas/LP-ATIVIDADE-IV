#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

   struct dados_contatos {
        char nome[200];
        char email[200];
        char telefone[200];
    };

    void pesquisarContato(struct dados_contatos *contatos, char *contato) {
        int i;

        for (i = 0; i < TAM; i++) {
           if (strcmp(contatos[i].nome, contato) == 0) {
           	   printf("Resultado da pesquisa");
               printf("Nome: %s \n", contatos[i].nome);
               printf("E-mail: %s \n", contatos[i].email);
               printf("Telefone: %s \n", contatos[i].telefone);
               return;
           }   
        }
        printf("Contato não encontrado. \n");
    }

int main () {
    setlocale(LC_ALL, "portuguese");
    
    struct dados_contatos contatos[TAM];
	char contato[200];
    int i;

    for (i = 0; i < TAM; i++) {
         printf("Cadastro de Contatos %d:\n", i + 1);
         printf("Digite o nome do contato: ");
         gets(contatos[i].nome);

         printf("Digite o e-mail do contato: ");
         gets(contatos[i].email);

         printf("Digite o número do telefone do contato: ");
         gets(contatos[i].telefone);
        printf("\n");
    }

    printf("\n-----Seleção de contatos-----\n");
    printf("Digite o nome do contato que deseja as informações: ");
    gets(contato);
    printf("\n");

    pesquisarContato(contatos, contato);

    printf("\nExibindo os dados do contato... \n");
  
    return 0;
 }
