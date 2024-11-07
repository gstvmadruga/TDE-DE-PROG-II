#include <stdio.h>

#define MAX_PRODUTOS 10
#define NOME_MAX 20

typedef struct {
   int id;
   char nome[NOME_MAX];
   float valor;
} Produto;

int main() {
   Produto produtos[MAX_PRODUTOS];

   for (int i = 0; i < MAX_PRODUTOS; i++) {
      printf("Digite o ID do produto %d: ", i + 1);
      scanf("%d", &produtos[i].id);
      printf("Digite o nome do produto %d: ", i + 1);
      scanf("%s", produtos[i].nome);
      printf("Digite o valor do produto %d: ", i + 1);
      scanf("%f", &produtos[i].valor);
   }

    printf("\nDados dos Produtos:\n");

    for (int i = 0; i < MAX_PRODUTOS; i++) {
       printf("Produto %d:\n", i + 1);
       printf("ID: %d\n", produtos[i].id);
       printf("Nome: %s\n", produtos[i].nome);
       printf("Valor: %.2f\n", produtos[i].valor);
       printf("-----------------------\n");
    }

    return 0;
 }
