/*Escrever um algoritmo que leia uma quantidade desconhecida de n�meros e conte quantos deles est�o nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100].
 A entrada de dados deve terminarquando for lido um n�mero negativo*/
#include <stdio.h>
int main(){
	
	int num, contador = 0;
	
	do{
		printf("Digite um numero: \n");
		scanf("%d", &num);
		
	if(num >= 0 && num <= 25 |num >= 26 && num <= 50 |num >= 51 && num <= 75 |num >= 76 && num <= 100) {
		
		contador = contador +1;		}	
		
	} while(num >= 0 ); 
		printf("Numero invalido.\nExecussao encerrada.\n"); 
				
	
	 	printf("Intervalo repetido %d vezes.\n", contador);
	  
	return 0;
} 
