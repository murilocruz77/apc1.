// faça um programa em c que calcule o perimetro de uma pizza (p= 2 x pl x r).
// considere o raio um numero inteiro e a constante pl igual a 3,1416
#include <stdio.h>

int main() {
  int raio;
  float perimetro;

  printf("informe o raio da pizza: ");
  int deu_certo= scanf("%i", &raio);

  perimetro = 2 * 3.1416 * raio;

  printf("o perimetro da pizza é %.2f c\n", perimetro);

  return 0;
}
