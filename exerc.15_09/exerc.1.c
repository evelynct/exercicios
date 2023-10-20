/*Escreva um programa que leia uma sequência de números inteiros até que o valor zero seja lido. 
Com esses valores, calcule a soma dos números ímpares e a média dos números pares.*/
#include <stdio.h>

int main(){
	int n, contador = 0, soma = 0;
	int contadorp = 0, valoresp = 0;
	float media;

	printf("Digite um numero (Digite zero para parar): \n");
	scanf("%d", &n);

	while(n != 0){
		if(n % 2 != 0){
			soma = soma + n;
			contador++;
		} else {
			valoresp = valoresp + n;
			contadorp++;
		}
		printf("Digite um numero (Digite zero para parar): \n");
		scanf("%d", &n);
	}
	if(contadorp != 0){
		media = (float)valoresp / contadorp;
		printf("A media dos numeros pares eh: %.2f.\n", media);
	} else {
		printf("Nenhum numero par foi encontrado.\n");
	}
	printf("A soma dos numeros impares eh: %d. \n", soma);
	
	return 0;
}

