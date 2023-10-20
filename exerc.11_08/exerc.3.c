#include <stdio.h>
int main(){
	float gasto, gorjeta, cons_total;
	/*Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom. 
	Escreva um algoritmo que leia o valor gasto pelo cliente em um restaurante e mostre o valor da gorjeta e o valor total a ser pago.*/
	
	printf("Digite o valor gasto pelo cliente: ");
	scanf("%f", &gasto);
	
     	gorjeta = ((gasto / 100)*10);
     	cons_total = (gorjeta + gasto);
	
	printf("O valor da gorjeta eh: %.2f, o valor total a ser pago eh: %.2f\n",gorjeta, cons_total);
	
		
	return 0;
}
