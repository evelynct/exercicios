/*Desenvolva um algoritmo que leia a idade de uma única criança e
 informe em qualturma a mesma irá ter aulas. O algoritmo deve se preocupar em responder para o usuário que a 
 escolinha não possui turmas para a criança caso a mesma tenha menos que 4 ano sou mais que 10 anos.
 Turma A de 4 a 5 anos// Turma B de 6 a 8 anos // Turma C de 9 a 10 anos // Sem turmas abaixo de 4 anos e acima de 10 anos*/

#include<stdio.h>
int main(){

	int i = 0;	
	
	printf("Digite a idade do aluno: ");
	scanf("%d", &i);	

	if(i == 4, i <= 5){
	printf("O aluno ira para a turma A",i);	 }
	else if(i == 6, i <= 8){
	printf("O aluno ira para a turma B",i);   	}
	else if(i == 9 , i == 10){
	printf("O aluno ira para a turma C",i);   	}
	
	else {
	printf("O aluno nao possui escolinha"); }
	
	return 0;
}
