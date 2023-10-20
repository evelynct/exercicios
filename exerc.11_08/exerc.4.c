#include <stdio.h>

int main() {
    // Declare as variáveis para armazenar o valor total das vendas e o número de sapatos vendidos
    float valorVendas;
    int numeroSapatos;

    // Solicita o valor total das vendas do mês ao usuário
    printf("Digite o valor total das vendas do mês: ");
    scanf("%f", &valorVendas);

    // Solicita o número de sapatos vendidos ao usuário
    printf("Digite o número de sapatos vendidos: ");
    scanf("%d", &numeroSapatos);

    // Calcula a comissão (20% das vendas)
    float comissao = (valorVendas * 0,20);

    // Calcula o pagamento por sapato vendido (R$5,00 por sapato)
    float pagamentoPorSapato = (numeroSapatos * 5);

    // Calcula o salário total do vendedor
    float salarioTotal = (comissao + pagamentoPorSapato);

    // Exibe o salário do vendedor
    printf("O salário do vendedor neste mês é: R$%.2f\n", salarioTotal);

    return 0;
}

