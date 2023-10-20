/*Escreva um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos 
[0,25], (25,50], (50,75], (75,100] esse valor se encontra. Se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”. 
O símbolo ( representa "maior que". Por exemplo:[0,25] indica valores entre 0 e 25.0000, inclusive eles.
 (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000*/
 
 #include <stdio.h>
 int main(){
 	
 	float x;
 	
 	printf("Digite um numero. \n");
	scanf("%f", &x);
 	
 	if(x >= 0 && x <= 25){
 		printf("O numero %.1f esta no intervalo [0-25].", x);
	 }
 	else if(x >= 25.00001 && x <= 50){
 		printf("O numero %.1f esta no intervalo [25-50].", x);
	 }
 	else if(x >= 50.00001 && x <= 75){
 		printf("O numero %.1f esta no intervalo [50-75].", x);
	 }
 	else if(x >= 75.00001 && x <= 100){
 		printf("O numero %.1f esta no intervalo [75-100].", x);
	 }
	else{
		printf("Fora do intervalo");
	 }
 	return 0;
 }
