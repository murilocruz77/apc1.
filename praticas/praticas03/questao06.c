// 6. Faça um programa em c que liste todos os multiplos de n, entre 1 e 100.

#include <stdio.h>

int main() {
int numero;

printf("entre com numero inteiro");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    for (int i = 1; i <= 100; i++) {
      if (i % numero == 0) {
        printf("%i, ", i);
      }

    } 
    printf("\n");
  } else {
    printf("numero invalido!\n");
  }

  return 0;
}