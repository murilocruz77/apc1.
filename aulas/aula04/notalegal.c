#include <stdio.h>

int main() {
  char nome[31];
  int quantidade;
  float valor;
  
  printf("entre com nome do produto: ");
  int deu_certo= scanf("%[^\n]s" , nome);
  
  printf("entre com a qtde do produto: ");
  deu_certo= scanf("%i" , &quantidade);

  printf("entre com o valor do produto: ");
  deu_certo= scanf("%f" , &valor);

  printf("--------------------------\n");
  printf("        NOTA LEGAL        \n");
  printf("--------------------------\n");
  printf(" ITEM          QTD VALOR  \n");
  printf( "%-14s %03i %7.2f\n", nome, quantidade, valor);  

  return 0;  
}