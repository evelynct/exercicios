#include <stdio.h>
int main(){
	
/*Sabe-se que, para iluminar de maneira correta os cômodos de uma casa,
para cada m² deve-se usar 18W de potência. Faça um programa que recebe as duas
dimensões de um cômodo (em metros), calcule e mostre a sua área (em m²) e a potência
de iluminação em watts que deverá ser usada.*/

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
