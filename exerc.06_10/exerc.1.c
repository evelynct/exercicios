/*Crie uma matriz de 11 linhas e 11 colunas que contenha a tabuada dos números de 0 a 10*/

#include <stdio.h>
int main(){
	 float tabuada[11] [11];
	 int i, c;
	 
	for(i = 0; i <= 10; i++ ){
		 for(c = 0; c <= 10; c++ ){		
		 
		 printf("%i \n % c", c, i);
		i = i*c;
		}
		
		printf("\n");
		
	 	
	 }
	 
	
	return 0;
}
