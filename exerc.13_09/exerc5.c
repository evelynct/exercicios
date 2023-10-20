/*Escreva um programa que leia dois n�meros inteiros e calcule o m�ximo divisor comum (MDC)desses n�meros*/
#include <stdio.h>
int main(){
	
	    int a, b, resto;
    
    printf("Digite dois n�meros para calcular o MDC: \n");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        resto = a % b; // Calcula o resto da divis�o entre a e b.
        a = b; // Atribui o valor de b a a.
        b = resto; // Atribui o valor do resto a b para a pr�xima itera��o.
    }

    printf("O MDC eh: %d\n", a);

	
		
	return 0;
}
