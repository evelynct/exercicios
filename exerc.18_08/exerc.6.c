#include <stdio.h>

int main(){
	
 /*Fa�a um programa que leia dois n�meros reais, um ser� o valor de um produto e outro o valor de desconto que esse produto est� recebendo. 
 Imprima quantos reais o produto custa na promo��o*/
 
 float produto, desconto, total;
 
	printf("Digite o valor do produto:  \n");
	scanf("%f", &produto);
	
	printf("Qual o desconto do produto:  \n");
	scanf("%f", &desconto);
	
	total = produto - desconto;
	
	printf("O valor a ser pago eh R$ %.2f", total);
 
 return 0;
}
