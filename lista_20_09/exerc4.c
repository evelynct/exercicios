/*Escreva um algoritmo que encontre o quinto número maior que 1000 cuja divisão por 11 tenha resto 5*/
#include <stdio.h>
int main(){
	
	int n, cont = 0;
	
	//for(cont = 0; cont <= 5; )
	for(n = 1001; n <= 12000 ; n++){
		
		if(n % 11 == 5){
			cont++;
			printf("%d ", n);
		}
	  	if(cont == 5) {
	  		printf("\nO quinto numero eh %d.", n);
	  		break;
		  }	
	}
	return 0;
}
