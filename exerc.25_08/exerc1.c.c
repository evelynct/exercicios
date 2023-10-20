/*Escreva um programa que receba um caractere e verifique se ele é uma vogal ou uma consoante.*/
#include <stdio.h>
#include <ctype.h>

	int main(){
	char caracter;
	
	printf("Digite um caracter: ");
	scanf("%c", &caracter);
	caracter =  tolower(caracter);
		
	if(caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
		printf("O caracter % c eh uma vogal. \n", caracter);
	}
	else{
		printf("O caracter % c eh uma consoante", caracter);
	}
	return 0;
}
