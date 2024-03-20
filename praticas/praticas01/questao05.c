// faça um prgrama em c que converta  um valor qualquer em gigabytes para um valor  em bytes (1GB = 1024³Bytes).
#include <stdio.h>

int main() {

  long int gigabytes;
  long int bytes;
  
  printf("informe o valor em gigabytes: ");
  int deu_certo = scanf("%li", &gigabytes);
  bytes = gigabytes * 1024 * 1024 * 1024;

  printf("o valor em bytes é %li\n", bytes);
  
  return 0;
}