/*Escreva um programa que receba um número inteiro de 1 a 7 e exiba o dia da semanacorrespondente.*/
#include <stdio.h>
	
	int main(){
	
	int dia;
	printf("Digite um numero de 1 a 7: \n");
	scanf("%d", &dia);
	
	switch(dia){
		case 1:
			printf("O dia eh Domingo.", dia); break;
		case 2:
			printf("O dia eh Segunda.", dia); break;
		case 3:
			printf("O dia eh Terca.", dia); break;
		case 4:
			printf("O dia eh Quarta.", dia); break;
		case 5:
			printf("O dia eh Quinta.", dia); break;
		case 6:
			printf("O dia eh Sexta.", dia); break;
		case 7:
			printf("O dia eh Sabado.", dia); break;	
		default: 
		printf(" Numero invalido.\n Tente novamente."); 
	}
	return 0;
}
