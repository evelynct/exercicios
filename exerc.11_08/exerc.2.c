#include <stdio.h>

int main() {
    float capacidade_tanque, litros_abastecidos, quilometragem_percorrida;

    // Solicita ao usuário a capacidade do tanque, a quantidade de litros abastecidos e a quilometragem percorrida
    printf("Informe a capacidade do tanque (em litros): ");
    scanf("%f", &capacidade_tanque);
    
    printf("Informe a quantidade de litros abastecidos: ");
    scanf("%f", &litros_abastecidos);
    
    printf("Informe a quilometragem percorrida desde o último abastecimento: ");
    scanf("%f", &quilometragem_percorrida);

    // Calcula o consumo médio
    float consumo_medio = quilometragem_percorrida / litros_abastecidos;

    // Calcula a autonomia
    float autonomia = capacidade_tanque * consumo_medio;

    // Exibe os resultados
    printf("O consumo médio do veículo é de %.2f km/l\n", consumo_medio);
    printf("A autonomia do veículo antes do próximo abastecimento é de %.2f km\n", autonomia);

    return 0;
}

