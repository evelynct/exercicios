/*Fa�a um programa que leia n n�meros e, para cada desses n�meros, diga se � primo ou n�o. Pare a repeti��o quando for lido um n�mero negativo*/
#include <stdio.h>
int main(){
	
	int n = 0, i, cont = 0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n <= 0) {			break;	 		}
		
	for(i = 1; i <= n; i++){
		
	if(n % i == 0){
			cont++;
		}
}
	if(cont == 2){
		printf("O numero %d eh primo.", n);
	}
	else{
		printf("O numero %d nao eh primo.", n);
	}		
}	while (n <= 0);
	
	return 0;	}
