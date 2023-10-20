#include <stdio.h>
int main(int argc, char * argv[]){
	/*Algoritmo que receba duas variaveis e mostre qual é a maior e qual é 
	a menor ou se são iguais*/
	float n1,n2;
	
	printf("Insira o primeiro valor:\n");
	scanf("%f", &n1);
	
	printf("Insira o segundo valor:\n");
	scanf("%f", &n2);
	
	if(n1 > n2){
		printf(" Maior: %.2f. \n Menor: %.2f \n", n1, n2);
	}

	else if(n1 < n2){
		printf("Maior: %.2f. \n Menor: %.2f \n", n2, n1);
	}

	if(n1 == n2){
		printf("Os numeros sao iguais. \n\n");	
	}
	
	system("pause");

	return 0;
}
