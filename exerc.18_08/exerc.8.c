#include <stdio.h>
int main(){
	
	/*Voc� est� endividado e quer administrar melhor sua vida financeira. Para isso, fa�a um programa que recebe o valor de uma d�vida e o juro mensal,
	 ent�o calcule e imprima o valor da d�vida no m�s seguinte*/
	 
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
