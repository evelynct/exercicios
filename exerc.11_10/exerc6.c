/*Escreva um programa que gere uma matriz dd 4 linhas e 4 colunas e crie sua transposta */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int mat[4][4], l, c;
	int transposta[4][4];
	
	
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
			mat[l][c] = rand() % 11;
			printf("%d	", mat[l][c]);
	
		}
			printf("\n");
	}
			printf("\n");
	
	   for (l = 0; l < 4; l++) {
        for (c = 0; c < 4; c++) {
            transposta[l][c] = mat[c][l];
			printf("%d	", transposta[l][c]);
	
        }
        		printf("\n");
    }
	return 0;
}


