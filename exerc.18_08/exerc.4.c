#include <stdio.h>
int main(){
	
/*Escreva um algoritmo que leia o valor total devido por um cliente, quantidade de dias de atraso e percentual 
de multa por dia de atraso. Aplique a porcentagem de multa pelo atraso do pagamento e imprima o valor total devido.*/

	float divida, dias, percentual, div_dia, total;

	printf("Digite o valor da divida...");
	scanf("%f", &divida);
	printf("Quantos dias de atraso...");
	scanf("%f", &dias);
	printf("Qual o percentual da multa...");
	scanf("%f", &percentual);
		
		div_dia = (divida*percentual/100);
		total = (div_dia * dias) + divida;
		
	printf("O valor total a ser pago eh:%.2f \n", total);
	
	return 0;
}
