// Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>

int main() {
  int anos;
  int meses;
  int dias;
  int total_dias;

  printf("informe a idade em anos: ");
  int deu_certo = scanf("%i", &anos);

  printf("informe a idade em meses: ");
  deu_certo = scanf("%i", &meses);

  printf("informe a idade em dias: ");
  deu_certo = scanf("%i", &dias);

  total_dias = anos * 365 + meses * 30 + dias;
  printf("a idade em dias é %i\n", total_dias);

  return 0;
}