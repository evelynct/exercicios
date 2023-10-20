/* Em uma certa papelaria, até 100 folhas, a cópia do xerox custaR$ 0,25 e, acima de 100 folhas, cada cópia adicional custa R$ 0,20.
 Escrevaum algoritmo que dado o número total de cópias, informe o valor a ser pago */
 
 #include <stdio.h>
 int main(){
 	
 	float total;
 	int uni;
 	
	 printf("Informe quantas folhas o cliente ira comprar: \n");
 	 scanf("%d", &uni);
 	
	if(uni >= 1 && uni <= 100){
	  	total = 0.25 * uni;
		printf("O valor a ser pago eh: %.2f", total);
	   }
 	else if(uni > 100){
	 	total = uni * 0.20;
		printf("O valor a ser pago eh: %.2f", total);
	 }
	 else{
		printf("Numero invalido.");
	 }
	 
	 
	 return 0;
 }
