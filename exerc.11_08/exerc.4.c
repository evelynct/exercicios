#include <stdio.h>

int main() {
    // Declare as vari�veis para armazenar o valor total das vendas e o n�mero de sapatos vendidos
    float valorVendas;
    int numeroSapatos;

    // Solicita o valor total das vendas do m�s ao usu�rio
    printf("Digite o valor total das vendas do m�s: ");
    scanf("%f", &valorVendas);

    // Solicita o n�mero de sapatos vendidos ao usu�rio
    printf("Digite o n�mero de sapatos vendidos: ");
    scanf("%d", &numeroSapatos);

    // Calcula a comiss�o (20% das vendas)
    float comissao = (valorVendas * 0,20);

    // Calcula o pagamento por sapato vendido (R$5,00 por sapato)
    float pagamentoPorSapato = (numeroSapatos * 5);

    // Calcula o sal�rio total do vendedor
    float salarioTotal = (comissao + pagamentoPorSapato);

    // Exibe o sal�rio do vendedor
    printf("O sal�rio do vendedor neste m�s �: R$%.2f\n", salarioTotal);

    return 0;
}

