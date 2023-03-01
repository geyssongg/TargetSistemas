/* Teste 2 */

int main(void) {

  /* Lendo o número */
  int num;
  printf("Digite o numero: ");
  scanf("%i", &num);

  /* Realizando o cálculo */
  int fib, i = 0, anterior = 1, atual = 0;

  /* a variavel esta_na_sequencia é um booleano
    0 = falso , 1 = verdadeiro */
  int esta_na_sequencia = 0;

  while (i < num+1) {

    /* Cálculo da sequencia */
    fib = anterior + atual;
    anterior = atual;
    atual = fib;

    /* Decisão para quebrar o loop */
    if (num == fib){
      esta_na_sequencia = 1;
      break;
    }
    else 
      i++;
  }
  if (esta_na_sequencia == 1)    
    printf("\nO número faz parte da sequência");
  else    
    printf("\nO número não faz parte da sequência");
}