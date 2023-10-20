/*Você deve escrever um programa que recebe uma nota no sistemanumérico e determina o conceito correspondente
0 E     	  1 a 35 D			36 a 60 C			61 a 85 B			86 a 100 A	*/
#include <stdio.h>
int main(){
	int nota;
	
	printf("Digite a nota do aluno:  ");
	scanf("%d", &nota);
	
	if(nota == 0){
		printf("Nota E");							}
	else if(nota >= 1 && nota <= 35){	
		printf("Nota D");							}		 
	else if(nota >= 36 && nota <= 60){	
		printf("Nota C");							} 
	else if(nota >= 61 && nota <= 85){	
		printf("Nota B");							} 
	else if(nota >= 86 && nota <= 100){	
		printf("Nota A");							} 
	else{
		printf("Nota  %d  invalida.", nota);		}
	
	return 0;    }




