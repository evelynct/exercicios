/*Escreva um programa que leia n�meros inteiros positivos at� que o n�mero 0 seja digitado eimprima a m�dia desses n�meros.*/
#include <stdio.h>
int main(){
	
	int num, soma = 0;
	float total = 0, media;
	
	do{
		printf("Digite um numero: \n");
		scanf("%d", &num);
		
	if(num >= 0){
		soma = soma +1;	
		total = total + num;		}
	else{
		if (num != 0)	
		printf("Numero invalido. \n");
	}
		
}	while(soma < 4);
 	 
 		media = total / soma;

		printf("\n\n A media eh: %.2f ", media);
	
	
	
	return 0;
}
