#include <stdio.h>

int main(){
// Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total
// de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha15% 
//de comissão sobre suas vendas efetuadas, informar o total a receber no finaldo mês.

float salario = 0, vendas = 0, comissao;
char nome;
float salario_final;

printf("/n Escreva o seu nome:..." ,nome);
scanf(" %c",&nome);

printf ("/n Qual seu salario fixo?",salario);
scanf("%f",&salario);

printf ("/n Informe o valor total de suas vendas..",vendas);
scanf("%f",&vendas);

comissao = (vendas/100)*15;
salario_final = comissao + salario;

printf("/n O valor que voce ira receber no final do mes he %f",salario_final);


return 0;



}
