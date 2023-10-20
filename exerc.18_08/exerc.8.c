#include <stdio.h>
int main(){
	
	/*Você está endividado e quer administrar melhor sua vida financeira. Para isso, faça um programa que recebe o valor de uma dívida e o juro mensal,
	 então calcule e imprima o valor da dívida no mês seguinte*/
	 
	 float conta, juros, total;
	 
	 printf("Digite o valor da conta: \n");
	 scanf("%f", &conta);
	 
	 printf("Digite a porcentagem de juros... \n");
	 scanf("%f", &juros);
	 
	 juros = (conta / 100 * juros);
	 total = conta + juros;
	 
	printf("O valor com juros a ser pago no proximo mes eh de R$ %.2f. \n", total);
	
	return 0;
}
