#include <stdio.h>
int main() {
    int a, b, c;

    printf("Digite 3 n�meros: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Encontrar o menor n�mero
    int menor = a; // Assumindo que 'a' � o menor n�mero inicialmente

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    // Encontrar o maior n�mero
    int maior = a; // Assumindo que 'a' � o maior n�mero inicialmente

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    // Imprimir o menor e o maior n�mero
    printf("O menor numero eh: %d\n", menor);
    printf("O maior numero eh: %d\n", maior);

    return 0;
}
