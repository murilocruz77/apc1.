#include <stdio.h>

int main() {
int nota; 

  printf("entre com uma nota de 1 a 5: ");
  int deu_certo = scanf("%i", &nota);

  switch(nota) {
    case 1: printf("ruim\n"); break;
    case 2: printf("insuficiente\n"); break;
    case 3: printf("suficiente\n"); break;
    case 4: printf("bom\n"); break;
    case 5: printf ("otimo\n"); break;
    default: printf("nota invalida\n");
  }
  return 0;
}