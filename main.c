
int main(void) {
  int opcao;
  int num1, num2, resultado;

  

  do {
    
    menu(&opcao);

    printf("Digite o primeiro número:\n");
    scanf(" %d", &num1);
    printf("Digite o segundo número:\n");
    scanf(" %d", &num2);
    
    switch (opcao) {
    case 1:

      resultado = soma(num1, num2);
      printf("Resultado: %d\n", resultado);
      break;

    case 2:
      resultado = subtracao(num1, num2);
      printf("Resultado: %d\n", resultado);
      break;

    case 3:
      resultado = multiplicacao(num1, num2);
      printf("Resultado: %d\n", resultado);
      break;

    case 4:
      resultado = divisao(num1, num2);
      printf("Resultado: %d\n", resultado);
      break;
    }

  } while (opcao != 5);

  return 0;
}