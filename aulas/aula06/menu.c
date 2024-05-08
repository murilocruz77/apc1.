#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - consultar saldo\n");
  printf ("2 - fazer recarga\n");
  printf("3 - listar recados\n");
  printf("4 - ligacoes feitas\n");
  printf("entre com uma opcao");
  int leu_certo = scanf("%c", &opcao);

  switch(opcao) {
    case '1': printf("seu saldo eh R$ 10.00\n"); break;
    case '2': {
      float valor;
      printf("entre com o valor da recarga: ");
        leu_certo = scanf("f", &valor);
      break;
    }
    case '3': printf("você não tem recados\n"); break;
    case '4':
    printf("619999999\n");
    printf("618888888\n");
    printf("619999999\n");
    printf("6188888888\n");
    break;
    case '0': printf("ate logo!\n"); break;
    default: printf("opcao invalida. tente novamente\n");
  }
      
    return 0;
}