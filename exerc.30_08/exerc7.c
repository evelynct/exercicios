/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. 
Calcule a médiacom pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ".
Se esta média for maiorou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculadafor inferior a 5.0, imprima a mensagem "Aluno reprovado.".
Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deveimprimir a mensagem "Aluno em exame"*/

#include <stdio.h>

int main() {
    float N1, N2, N3, N4;
    
    printf("Digite a nota N1: ");
    scanf("%f", &N1);
    printf("Digite a nota N2: ");
    scanf("%f", &N2);
    printf("Digite a nota N3: ");
    scanf("%f", &N3);
    printf("Digite a nota N4: ");
    scanf("%f", &N4);

    float media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    printf("Media: %.1f\n", media);

    if (media >= 7.0 && media <= 10.0) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5.1 && media >= 6.9) {
        printf("Aluno em exame.\n");
	}else if (media >= 0 && media <= 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Valor invalido.\n");
    }
    return 0;
}

