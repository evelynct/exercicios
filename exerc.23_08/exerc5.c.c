/*Desenvolva um algoritmo para aplicar um percentual de desconto sobre o valor de uma compra informado pelo usuário.
 Os percentuais de desconto são:? 15% para compras acima de R$ 500,00;  /// 10% para compras entre R$ 200,00 e R$ 499,99; ///
5% para compras abaixo de R$ 200,00.   O algoritmo deverá exibir o valor antes do desconto, o valor do desconto e o valor a serpago.*/
#include <stdio.h>
int main(){
	
	 float valor, desconto, total;
	 printf("Digite o valor da compra:");
	 scanf("%f", &valor);
	 
	 if(valor > 500){
	 	desconto = valor * 0.15;
	 	total = valor - desconto;
	 	printf("O desconto foi de: %.2f \n", desconto);
	 	printf("O valor a ser pago eh: %.2f \n",total);   
	}
	else if(valor = 200, valor <= 499){
	 	desconto = valor * 0.15;
	 	total = valor - desconto;
	 	printf("O desconto foi de: %.2f \n", desconto);
	 	printf("O valor a ser pago eh: %.2f \n",total);  
	}
		else if(valor > 200){
	 	desconto = valor * 0.15;
	 	total = valor - desconto;
	 	printf("O desconto foi de: %.2f \n", desconto);
	 	printf("O valor a ser pago eh: %.2f \n",total);  
	}
	return 0;
}
