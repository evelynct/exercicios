/*Escreva um programa que leia uma sequ�ncia de n�meros inteiros positivos e negativos, e imprimaa soma dos n�meros positivos e a soma dos n�meros negativos.*/
#include <stdio.h>
int main(){

	int num, soma1 = 0, soma2 = 0;
	
	do{
		printf("Digite um numero positivo ou negativo: \n");
		scanf("%d", &num);
		
	if(num >= 0){
		soma1 = soma1 + 1;						}
	else if(num < 0){
		soma2 = soma2 + 1;						}

	else{
		printf("Caractere invalido. \n");
	} 
	

	}	while(soma1 < 3 || soma2 < 3);
	
	
	printf("\n\n Foram digitados %d numeros positivos e %d numeros negativos.", soma1, soma2);	
	
	return 0;
}
