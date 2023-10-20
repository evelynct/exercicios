/*Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados no intervalo de 0 a 20*/
// (impar) num %2  != 0

#include <stdio.h>
int main(){
	int num = 1;
	
	do{
		if(num %2 != 0){
		printf("  %d  ", num);	
			}
	num++;
}
	
	while(num <= 20);	
	
	return 0;
}

