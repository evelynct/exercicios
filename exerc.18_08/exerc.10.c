#include <stdio.h>
int main(){
	
	/*100kw = 1/7 salario
	quanto vale 1kw, total em R$ gasto*/
	
	float sala, kw, unidade, total;
	
	printf("Digite o salario minimo...");
	scanf("%f", &sala);
	
	printf("Digite quantos kw foram gastos...");
	scanf("%f", &kw);
	
		unidade = (sala/7) / 100;
		total = unidade *kw;
		
	printf("O preco de cada kw em R$ %.2f \n", unidade);
	printf("O total gasto em R$ foi %.2f \n", total);
	
	
	return 0;
}
