/*Construa um algoritmo que receba um número inteiro e verifiquese o mesmo é primo*/
#include <stdio.h>
int main(){
	int n, i, cont = 0;
	
		printf("Digite um numero: ");
		scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		if(n % i == 0){
			cont++;
		}
	
	}
	if(cont == 2){
		printf("O numero %d eh primo.", n);
	}
	else{
		printf("O numero %d nao eh .", n);
	}
	
	return 0;
}
