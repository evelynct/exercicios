/*Leia um número inteiro que representa umcódigo de DDD para discagem interurbana.
 Em seguida, informe à qual cidadeo DDD pertence, considerando a tabela abaixo. 
 61 Brasília	71 Salvador		11 São Paulo	21 Rio de Janeiro	32 Juiz de Fora		19 Campinas		27 Vitória		31 Belo Horizonte*/
 
#include <stdio.h>
int main(){
	int dd;
	
	printf("Informe o DD: \n");
	scanf("%d", &dd);
	
	switch(dd){
		case 61:
			printf("DD de Brasilia.");			break;
		case 71:
			printf("DD de Salvador.");			break;
		case 11:
			printf("DD de Sao Paulo.");			break;
		case 21:
			printf("DD de Rio de Janeiro.");		break;
		case 32:
			printf("DD de Juiz de Fora.");		break;	
		case 19:
			printf("DD de Campina.");				break;
		case 27:
			printf("DD de Vitoria.");			break;
		case 31:
			printf("DD de Belo Horizante");		break;
		default:
			printf("DD invalido.");			
	}
	return 0;
}  
