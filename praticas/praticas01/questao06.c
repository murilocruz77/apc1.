// faça um programa em c que calcule as raizes de uma equaçao do segundo grau atraves da formula de bhaskara (-b +/- raiz_quadrada_de delta) / (b2_ 4ac)/2a).
#include <stdio.h>
#include <math.h>

int main() {
 float a, b, c;
 float delta;
 float x1, x2;

printf("informe o valor de a: ");
int deu_certo = scanf("%f", &a);

printf("informe o valor de b: ");
deu_certo = scanf("%f", &b);

printf("informe o valor de c: ");
deu_certo = scanf("%f", &c); 

delta = b * b - 4 * a * c;
x1 = (-b + sqrt(delta)) / (2 * a);

x2 = (-b - sqrt(delta)) / (2 * a);
printf("as raizes da equacao sao %.2f e %.2f\n", x1, x2);

  return 0; 
}