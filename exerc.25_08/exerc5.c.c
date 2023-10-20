/*Construa um algoritmo que funcione como uma calculadora simples. A calculadora deve realizar asoperações de soma (+), subtração (-), multiplicação (*) e divisão (/). 
O usuário deve informar aoalgoritmo dois operandos (dois números) e a operação.
 O algoritmo deve retornar o resultado daoperação ou uma mensagem de erro caso o usuário solicite uma operação não definida*/
 #include <stdio.h>
 int main(){
 	
	float a, b, resultado; 
	int calculo;
	
		printf("Digite 1 para soma e 2 para subtracao:");
		scanf("%d", &calculo);
		
		printf("Digite um valor para o calculo: \n");
		scanf("%f", &a);
		
		printf("Digite um valor para o calculo: \n");
		scanf("%f", &b);
		
	switch(calculo){
		
		case 1: 
		resultado = a + b;
		printf("A soma dos dois valores digitados eh: %.2f. \n", resultado);
		
		case 2: 
		resultado = a - b;
		printf("A subtracao dos dois valores digitados eh: %.2f. \n", resultado);		}
	 
 	return 0;		}
