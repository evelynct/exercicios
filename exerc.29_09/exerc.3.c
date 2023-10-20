/*escreva um programa que receba do teclado uma string de até 200 caracteres e um determinadocaractere,
 e devolva a localização da última ocorrência desse caractere na string.
 Se o caracterenão aparecer na string, o programa deve exibir uma mensagem informando isso.*/	
#include <stdio.h>
#include <string.h>
int main(){
	
	char palavra[200], letra;
	int i,tam, ultindice;
	
	printf("Digite uma string:");
	fgets(palavra, 200, stdin);
	
	tam = strlen(palavra);
	
	printf("Agora digite um caractere a ser pesquisado: ");
	scanf(" %c", &letra);
	
	for (i = 0; i < tam -1; i++){
		if (palavra[i] == letra){
			ultindice= i;
			printf("Encontrou %c no indice %d \n", letra, i);
		}
	}
	printf("O ultimo indice que contem %c eh %d", letra, ultindice);
	
	return 0;
} 
