#include <stdio.h>
int main() {
    int a, b, c;

    printf("Digite 3 números: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Encontrar o menor número
    int menor = a; // Assumindo que 'a' é o menor número inicialmente

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    // Encontrar o maior número
    int maior = a; // Assumindo que 'a' é o maior número inicialmente

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    // Imprimir o menor e o maior número
    printf("O menor numero eh: %d\n", menor);
    printf("O maior numero eh: %d\n", maior);

    return 0;
}
