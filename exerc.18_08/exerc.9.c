#include <stdio.h>
int main(){
	
	/*Fa�a um programa que efetue o c�lculo do sal�rio l�quido de um professor.
Os dados fornecidos ser�o: valor da hora aula, n�mero de aulas dadas no m�s e percentual de desconto do INSS*/
	
	float preco, horas, aulas, desconto, salario;
	
	printf("Digite o preco da hora do professor... \n");
	scanf("%f", &preco);

	printf("Digite quantas horas o professor trabahou esse mes... \n");
	scanf("%f", &horas);
		
	printf("Digite o percentual que o INSS desconta mensalmente... \n ");
	scanf("%f", &desconto);
	 
	aulas = preco * horas;
	salario = aulas/100 * desconto + aulas;
	
	printf("O salario liquido do professor no final do mes, sera de: R$%.2f\n\n",salario);
	
	return 0;
}
