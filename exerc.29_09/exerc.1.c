/*Escreva um algoritmo que leia uma string do teclado e a escreva na tela ao contrario*/
	/*		INFORMAÇÕES (verificador de palindromo)
	
	
	*/
	
	
#include <stdio.h>
#include <string.h>
int main(){
	
	char  tam, palavra[100];
	int i
	
	printf("Digite uma palavra");
	fgets(palavra, 100, stdin);
	
	puts(palavra);
	tam = strlen(palavra);
	
	printf("Tamanho da string: %d \n ", tam);
	
	for(i = 99; i >= 0; i--){
		printf("%c", palavra[i]);
	}
	
	return 0;
}
