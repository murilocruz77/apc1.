 // Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>
#include <math.h>

int main() {

  int numero1;
  int numero2;
  int quociente;
  int resto;

  printf("entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero: ");
  deu_certo = scanf("%i", &numero2);

  quociente = numero1 / numero2;
  resto = numero1 % numero2;
  printf("o quociente é %i\n", quociente);
  printf("o resto é %i\n", resto);
  
  return 0;
}