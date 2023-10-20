#include <stdio.h>
int main(){
	
	/*Faça um programa que efetue o cálculo do salário líquido de um professor.
Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS*/
	
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
