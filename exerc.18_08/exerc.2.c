#include <stdio.h>
int main(){
	
	/*Fa�a um programa em para calcular e imprimir o valor do volume de uma lata de �leo, utilizando a f�rmula:
 volume = PI * raio� * altura*/
 
  float vol_oleo, alt, raio, pi=3.14;
  
  printf("Digite a altura da lata de oleo...");
  scanf("%f", &alt);
  
  printf("Digite o raio da lata de oleo...");
  scanf("%f", &raio);
  
  vol_oleo = pi * (raio * raio) * alt;

	printf("O valor do volume da lata de oleo eh: %.2f",vol_oleo);	
	
	return 0;
}
