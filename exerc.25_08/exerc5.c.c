/*Construa um algoritmo que funcione como uma calculadora simples. A calculadora deve realizar asopera��es de soma (+), subtra��o (-), multiplica��o (*) e divis�o (/). 
O usu�rio deve informar aoalgoritmo dois operandos (dois n�meros) e a opera��o.
 O algoritmo deve retornar o resultado daopera��o ou uma mensagem de erro caso o usu�rio solicite uma opera��o n�o definida*/
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
