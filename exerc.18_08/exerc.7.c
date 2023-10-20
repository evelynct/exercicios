#include <stdio.h>

int main(){
	
 /*Faça um programa que leia dois números reais, um será o valor de um produto e outro o valor de desconto que esse produto está recebendo. 
 Imprima quantos reais o produto custa na promoção*/
 
 float produto, desconto, total;
 
	printf("Digite o valor do produto:  \n");
	scanf("%f", &produto);
	
	printf("Qual o desconto do produto:  \n");
	scanf("%f", &desconto);
	
	total = produto - desconto;
	
	printf("O valor a ser pago eh R$ %.2f", total);
 
 return 0;
}
