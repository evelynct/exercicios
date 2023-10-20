/*Escreva um programa que leia dois números inteiros e calcule o máximo divisor comum (MDC)desses números*/
#include <stdio.h>
int main(){
	
	    int a, b, resto;
    
    printf("Digite dois números para calcular o MDC: \n");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        resto = a % b; // Calcula o resto da divisão entre a e b.
        a = b; // Atribui o valor de b a a.
        b = resto; // Atribui o valor do resto a b para a próxima iteração.
    }

    printf("O MDC eh: %d\n", a);

	
		
	return 0;
}
