/*Leia dois números (a e b) do teclado, tal que a < b, e imprima a tabuada de cada um desses números.? 
Por exemplo, se forem lidos os números 3 e 5, apresentar a tabuada do 3, do 4 e do 5 (cadauma de 1 a 10).*/
#include <stdio.h>
int main(){
	
	int a , b, i, l;
	
	printf("Digite um numero: ");
		scanf("%d", &a);
	printf("Digite um numero: ");
		scanf("%d", &b);
	
    if (a >= b) {
        printf("O primeiro número deve ser menor que o segundo número.");
        return 0;
}

	
	for(l = a; l <= b; l++){
		for(i = 1; i <= 10; i++){
		//	printf("Tabuada do %d: \n", l);
			
			printf("%d x %d = %d\n", l, i, l * i);
        }
        	printf("\n");
}
	
		
	return 0;
}
