#include <stdio.h>

int main() {
  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_salario_bruto =
      valor_da_hora_de_trabalho * total_de_horas_trabalhadas;
  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_previdencia = valor_salario_bruto * INSS;
  float valor_salario_liquido =
      valor_salario_bruto - valor_imposto_renda - valor_imposto_previdencia;

  printf("\x1b[40m\x1b[35m-------------------------------\n");
  printf("    C O N T R A C H E Q U E    \n");
  printf("-------------------------------\x1b[0m\n");
  printf("salario bruto...: %14.2f\n", valor_salario_bruto);
  printf("imposto renda...: %14.2f\n", valor_imposto_renda);
  printf("imposto previ...: %14.2f\n", valor_imposto_previdencia);
  printf("salario liquido.: %14.2f\n", valor_salario_liquido);
  return 0;
}