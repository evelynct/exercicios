#include <stdio.h>
int main(){
	/*Efetuar a leitura de um valor numérico inteiro positivo ou negativo
	representado pela variável N e apresentar o valor lido como sendo positivo.
	 Dica: se o valor lido for menor que zero, ele deve ser multiplicado por -1*/
	 
	 float n;
	 
	 printf("Digite um numero:");
	 scanf("%f", &n);
	 
	 if(n < 0){
	n = n *-1;	
	printf("O valor de N eh: %.2f", n); 	
	  }
	  else{
	  	printf("O valor de N eh:%.2f \n \n", n);
	  }
	 
	/*system("pause"); */
	return 0;
}
