/*Escreva um programa que mostra na tela todos os númerosinteiros divisíveis por 7 contidos no intervalo fechado [0, 1000]*/
#include <stdio.h>
int main(){
	int a;
	for(a = 0; a <= 1000; a++){
		if(a % 7 == 0){	
			printf(" %d ", a);
		}
	}
	
	return 0;
}
