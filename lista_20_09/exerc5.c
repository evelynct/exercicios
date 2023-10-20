/*Foi realizada uma pesquisa entre os habitantes de uma região e coletados os dados de altura e sexo (0 = masc, 1 = fem, 2 = não declarado)das pessoas.
 Faça um programa que leia 50 dados diferentes e informe: 
a maior e a menor altura encontradas; 
a média de altura das mulheres;
a média de altura da população;
o percentual de homens na população.*/

#include <stdio.h>
int main(){
	
	int i, n, masc = 0, fem = 0, indef = 0, qntd, soma;
	float alt, maior = 0, menor = 3.00, media1 = 0, media = 0;
	
	for(i = 1; i <= 2; i++){
			
		printf("Digite 0 para sexo masculino, 1 para feminino e 2 caso nao queira informar: \n");
		scanf("%d", &n);
	
		printf("Digite a altura: \n");
		scanf("%f", &alt);	
		media = media + alt; 
		

	if(n == 0) {
		masc ++;
		}
	if(n == 1) {
		fem ++;				
		media1 = media1 +alt;
		} 
	if(n == 2) {	
		indef++;
		} 
			
	if(alt > maior){
		maior = alt;
		}
	if(alt < menor) {
	 	menor = alt;
		}	
		
}
	
	media1 = media1 / fem;
	media = media / (masc + fem + indef);
	
	printf("A maior altura encontrada eh: %.2f \n A menor altura encontrada eh: %.2f\n", maior, menor);
	printf("A media da altura das mulheres eh: %.2f \n A media de todas alturas coletadas eh: %.2f", media1, media);
	
	return 0;
	
}
