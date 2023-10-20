/*  Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir,calcule e mostre o valor da conta a pagar
    1 Cachorro-quente R$ 12,002///        2 X-Salada R$ 15,503///      3 X-Bacon R$ 18,004////     4 Torrada simples R$ 8,005///         5 Refrigerante R$ 4,50   */
    
#include <stdio.h>
int main(){
	float  quantidade, total;
	int codigo;

		printf("\n  Digite o codigo do seu lanche de 1 a 5 e a quantidade: \n");	
		scanf("%d",&codigo);
		scanf("%f",&quantidade);
		
	if (codigo >= 1 && codigo <= 5){
	
		switch(codigo){
			case 1:
				total = quantidade * 12.002;
				printf("O valor a ser pago eh: %.3f.", total);		break;
			case 2:
				total = quantidade * 15.503;
				printf("O valor a ser pago eh: %.3f.", total);		break;
			case 3:
				total = quantidade * 18.004;
				printf("O valor a ser pago eh: %.3f.", total);		break;
			case 4:
				total = quantidade * 8.005;
				printf("O valor a ser pago eh: %.3f.", total);		break;
			case 5:
				total = quantidade * 4.50;
				printf("O valor a ser pago eh: %.3f.", total);		break;
		}
}	else{
		printf("Este codigo %d nao esta vinculado a nenhum item.", codigo);			}
return 0;
}
