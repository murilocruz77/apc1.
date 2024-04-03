// Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main() {
  float distancia;
  float angulo;
  float altura;

  printf("informe a distancia percorrida pelo aviao: ");
  int deu_certo = scanf("%f", &distancia);

  printf("informe o angulo de inclinacao do aviao: ");
  deu_certo = scanf("%f", &angulo);

  altura = sin(angulo) * distancia;
  printf("a altura alcançada pelo aviao é %.2f\n", altura);
  
  return 0;
}