#include <stdio.h>

int main() {
    float salario_atual, percentual_aumento, novo_salario;

    // Ler o salário atual do funcionário
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    // Determinar o percentual de aumento com base na faixa salarial
    if (salario_atual >= 0 && salario_atual <= 1400) {
        percentual_aumento = 15;
    } else if (salario_atual <= 2000) {
        percentual_aumento = 12;
    } else if (salario_atual <= 3000) {
        percentual_aumento = 10;
    } else if (salario_atual <= 3800) {
        percentual_aumento = 7;
    } else if (salario_atual <= 5000) {
        percentual_aumento = 4;
    } else {
        percentual_aumento = 0; // Sem aumento
    }

    // Calcular o aumento e o novo salário
    novo_salario = salario_atual + (salario_atual * percentual_aumento / 100);

    // Exibir os resultados
    printf("Percentual de aumento: %.2f%%\n", percentual_aumento);
    printf("Valor do aumento: R$%.2f\n", (novo_salario - salario_atual));
    printf("Novo salário: R$%.2f\n", novo_salario);

    return 0;
}

