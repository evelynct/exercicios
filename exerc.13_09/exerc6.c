/*Escreva um programa que leia uma sequência de números inteiros positivos e imprima o menor e omaior número lido*/
#include <stdio.h>
int main(){
	
	int a, b, c, contador = 0;
	
	do{
		printf("Digite 3 numeros:\n ");
		scanf("%d" "%d" "%d", &a ,&b ,&c);
		
		if(c > a && c > b){
			printf("O numero %d eh o maior.\n", c);		}
		else if(b > a && b > c){
			printf("O numero %d eh o maior.\n", b);		}
		else if(a > b && a > c){
			printf("O numero %d eh o maior.\n", a);		}
		if(c < a && c < b){
			printf("O numero %d eh menor.\n", c);		}
		else if(b < a && b < c){
			printf("O numero %d eh o menor.\n", b);		}
		else if(a < b && a < c){
			printf("O numero %d eh o menor.\n", a);		}
		
	}	while(a == b == c);
		printf("Algum numero esta repitido.\n");
	
	return 0;
}
