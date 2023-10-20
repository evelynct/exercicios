/*Cada caso de teste inicia com um inteiro N, indicando quantos minutosfaltam para o final do expediente. 
Em seguida haverá dois inteiros A e B,indicando quantos minutos são necessários para fabricar os dois presentes.*/
#include <stdio.h>
int main(){
	
	int n, a, b, prod;
	
	printf("Digite quantos minutos falta para o final de expediente de Ed:  ");
		scanf("%d", &n);
	printf("Digite quantos minutos leva para fabricar o primeiro produto:  ");
		scanf("%d", &a);
	printf("Digite quantos minutos leva para fabricar o segundo produto:  ");
		scanf("%d", &b);
	
	prod = a + b;
	
	if(prod <= n){
		printf("Farei hoje!");		
	}
	else if(prod > n ){
		printf("Deixa para amanha!");			
	}
	else{
		printf("Valor invalido.");
	}
	return 0;
}
