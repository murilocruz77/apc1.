#include <stdio.h>
#include <stdlib.h>

int main() {
 int opcao = 0;
  
 do {
   int deu_certo = system("clear");
  printf("MEU JOGO\n");
  printf("1 - iniciar\n");
  printf("2 - resultado\n");
  printf("3 - Ajuda\n");
  printf("4 - Sair\n");
   deu_certo = scanf(" %i", &opcao);
   if (!deu_certo) opcao = 0;
   while (getchar() != '\n'); // limpar buffer do teclado

   
  printf("Escolha uma opção => ");
  deu_certo = scanf( "%i", &opcao);
  while (getchar() != '\n'); // limpar buffer do teclado
   
  switch (opcao) {
    case 1 : {
      deu_certo = system("clear");
      char nome[31];
      printf("Nome do jogador: ");
      deu_certo = scanf("%[^\n]", nome);
       while (getchar() != '\n');
      printf("Ola %s\n", nome);
      printf("Pressione ENTER p/ iniciar");
      getchar();
      break;
    }

    case 2: {
      deu_certo = system("clear");
      printf("Resultado\n");
      printf("1o lugar - Murilo - 1000/n");
      printf("2o lugar - jose - 700/n");
      printf("3o lugar - joao - 600/n");
      printf("4o lugar - Pedro - 500/n");
      printf("5o lugar - Artur - 100/n");
      getchar();
      break;
    }

      
    case 3:  break;
    case 4:  break;
    default:
      opcao = 0;
    printf("Opcao invalida! pressione ENTER p/ continuar");
      getchar ();
  } 
 } while (opcao != 4);

  return 0;
}