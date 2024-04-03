 // Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).

#include <stdio.h>

int main() {
  int segundos;
  int horas;
  int minutos;
  int segundos_restantes;

  printf("informe o tempo em segundos: ");
  int deu_certo = scanf("%i", &segundos);
  horas = segundos / 3600;

  segundos_restantes = segundos % 3600;
  minutos = segundos_restantes / 60;
  segundos_restantes = segundos_restantes % 60;

  printf("%i segundos corresponde a %i horas %i minutos e %i segundos\n", segundos, horas, minutos, segundos_restantes);
  
  return 0;
}
