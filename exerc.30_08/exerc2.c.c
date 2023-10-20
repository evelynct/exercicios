#include <stdio.h>

int main() {
    int A, B;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int resultado = A * B;

    if (resultado == 0) {
       	 printf("nulo\n");
 }
 	 else if (resultado < 0) {
      	  printf("sinal negativo\n");
 }
 	 else {
       	 printf("sinal positivo\n");
    }

    return 0;
}

