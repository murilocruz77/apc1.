 // Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>
#include <math.h>

int main() {
  int numero;
  int unidade;
  int dezena;
  int centena;
  int milhar;

  printf("informe um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  printf("o numero informado foi %i\n",numero);
  numero = numero / 1000;

  printf("a unidade é %i\n", unidade);
  unidade = numero % 10;

  printf("a dezena é %i\n", dezena);
  dezena = numero % 100;

  printf("a centena é %i\n", centena);
  centena = numero % 1000;

  printf("o milhar é %i\n", milhar);
  milhar = numero % 10000;

  return 0;
}
