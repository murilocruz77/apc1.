#include <stdio.h>

int main() {
  printf("\x1b[36m--------------------------\n");
  printf("        NOTA LEGAL        \n");
  printf("--------------------------\x1b[0m\n");
  printf(" ITEM          QTD VALOR  \n");
  printf("%-14s %03i %7.2f\n", "banana nanica", 10, 20.00);
  printf("%-14s %03i %7.2f\n", "uva globo", 1, 15.00);
  printf("%-14s %03i %7.2f\n", "laranja lima", 1, 18.00);
  
  //printf("MANDIOCA       1    R$20,00\n");
  //printf("BATATA         5    R$15,00\n");
  //printf("TOMATE         2    R$18,00\n");
  printf("--------------------------\n");
  printf("TOTAL              R$53,00\n");
  return 0;
}