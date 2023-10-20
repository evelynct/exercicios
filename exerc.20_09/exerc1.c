/*Dado um valor n inteiro positivo lido do teclado, exibir n linhas em que cada linha contém tantos asteriscos (*) quanto for o número da linha.? 
Por exemplo, lendo o número 3, a linha 1 deve exibir  “*” , a linha 2 deve exibir  “**”  e a linha 3 deve exibir  “***” */
#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}

