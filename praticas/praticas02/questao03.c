 // Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 395).

#include <stdio.h>
#include <math.h>

int main() {

  float celsius;
  float fahrenheit;

  printf("entre com a temperatura em celsius: " );
  int deu_certo = scanf("%f", &celsius);
  fahrenheit = (9 * celsius + 160) / 5;
  printf("a temperatura em fahrenheit é %.2f\n", fahrenheit);
  return 0;
}