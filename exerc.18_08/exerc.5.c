#include <stdio.h>
int main(){
	
/*Sabe-se que, para iluminar de maneira correta os c�modos de uma casa,
para cada m� deve-se usar 18W de pot�ncia. Fa�a um programa que recebe as duas
dimens�es de um c�modo (em metros), calcule e mostre a sua �rea (em m�) e a pot�ncia
de ilumina��o em watts que dever� ser usada.*/

	float largura, comprimento, area, potencia;

	printf("Digite a largura do comodo..");
	scanf("%f", &largura);
	printf("Digite o comprimento do comodo...");
	scanf("%f", &comprimento);
	
	area = largura * comprimento;
	potencia = 18 * area;
	
	printf("Area total do comodo eh: %f \n", area);
	printf("Potencia total necessaria eh:  %.2f \n", potencia);
	
	return 0;
}
