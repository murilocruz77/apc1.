/*
1. Faça um programa em C que determine se um número inteiro lido é par ou ímpar.
*/

#include <stdio.h>

int main() {

  int numero;

  printf("entre com um numero inteiro: ");
  int leu_certo = scanf("%i", &numero);
  
  if (leu_certo) {
  int numero_eh_divisivel_por_2 = numero % 2 == 0;

  if (numero_eh_divisivel_por_2) {
    printf("o numero %i é par\n", numero);
  } else {
    printf("o numero %i eh impar!\n", numero);
}
  } else {
    printf("Numero ivalido! tente novamente.\n");
  }
  return 0;
}