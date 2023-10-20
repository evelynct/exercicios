#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int vet[10], i;
	for(i=0; i<=10; i++) {
		vet[i] = rand() % 21;
		printf("%d ", vet[i]);
	}
	return 0;
}
