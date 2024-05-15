#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;
  while (numero_valido == 0)
  printf("Entre com um numero de 1 a 10: ");
  int deu_cero = scanf("%i", &numero);
   numero_valido = numero >= 1 && numero <= 10;

  if (deu_cero && numero_valido) {
    printf("Segue o jogo!\n");
  } else {
    getchar(); // limpar /n
    printf ("numero ino. tente de novo!\n");
  }
} 
do {
  printf("Entre com um numero de 1 a 10: ");
  int deu_cero = scanf("%i", &numero);
   numero_valido = numero >= 1 && numero <= 10;

  if (deu_cero && numero_valido) {
    printf("Segue o jogo!\n");
  } else {

return 0;

