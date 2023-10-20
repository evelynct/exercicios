#include <stdio.h>
int main(){
	
	int a, b;
	
	printf("Digite dois numeros inteiros: \n");
	scanf("%d", &a);	
	scanf("%d", &b);	
	
	if(a % b == 0 && b % a == 0){
		printf("Os numeros %d e %d sao multiplos. \n", a, b);
	} else {
		printf("Os numeros %d e %d nao sao multiplos. \n", a, b);
	}
	
return 0;
}
