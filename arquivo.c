#include <stdio.h>
#include "arquivo.h"

void menu(int *opcao) {

  printf("Digite qual operação você quer fazer:\n");
  printf("1 - Soma\n");
  printf("2 - Subtraç1ão\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  printf("5 - Sair\n");

  scanf("%d", opcao);
}

int soma(int a, int b) {2
  int resultado;
  resultado = a + b;
  return resultado;
}
int subtracao(int a, int b) {
  int resultado;
  resultado = a - b;
  return resultado;
}

int multiplicacao(int a, int b) {
  int resultado;
  resultado = a * b;
  return resultado;
}

int divisao(int a, int b) {
  int resultado;
  resultado = a / b;
  return resultado;
}
