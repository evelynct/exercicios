#include <stdio.h>
int main(){
	
/*Calcular o aumento que ser� dado a um funcion�rio, obtendo do usu�rio as
seguintes informa��es: sal�rio atual e a porcentagem de aumento. Apresentar o novo valor
do sal�rio e o valor do aumento*/

 float sal_atual, sal_novo, porc, aumento;

	printf("Digite o seu salario atual:");
	scanf("%f", &sal_atual);
	printf("Digite a porcentagem do aumento...");
	scanf("%f", &porc);
	
	sal_novo = sal_atual+sal_atual*(porc/100);
	
	printf("Salario atual:%.2f  \n",sal_novo);
	
	aumento = sal_novo - sal_atual;
	
	printf("O aumento foi de R$: %.2f \n",aumento);

	return 0;
}
