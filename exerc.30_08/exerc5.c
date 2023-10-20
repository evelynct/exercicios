/*A organiza��o da OIBR, Olimp�adaInternacional de Basquete de Rob�, est� come�ando a ter problemas.
 � que os rob�s desses times acertam quase todos os lan�amentos, de qualquer posi��ona quadra!
  Pensando bem, o jogo de basquete ficaria mesmo sem gra�a se jogadores conseguissem acertar qualquer lan�amento, n�o � mesmo? 
  Uma das medidas que a OIBR est� implantando � uma nova pontua��o para os lan�amentos, de acordo com a dist�ncia do rob� para o in�cio da quadra.
  A quadra tem 2000 cent�metros de comprimento. Dada a dist�ncia D do rob� at� o in�cio da quadra, onde est� a cesta, a regra � a seguinte:?
   Se 0 = D = 800, a cesta vale 1 ponto;? Se 800 < D = 1400, a cesta vale 2 pontos;? Se 1400 < D = 2000, a cesta vale 3 pontos.
   A organiza��o da OIBR precisa de ajuda para automatizar o placar dojogo. Dado o valor da dist�ncia D (que n�o deve ser negativa e nem maior que
os 2000 cent�metros do tamanho da quadra), voc� deve escrever um programapara calcular o n�mero de pontos do lan�amento*/

#include <stdio.h>
int main(){
	
	float d;
	int pontos;
	
		printf("Digite a distancia do robo: \n");
		scanf("%f", &d);
	
	if(d >= 1 && d <= 800){	
		pontos = 1;
		printf("A cesta acumulou %d ponto.", pontos);
}
	else if(d >= 801 && d <= 1400){	
		pontos = 2;
		printf("A cesta acumulou %d pontos.", pontos);
}
	else if(d >= 1401 && d <= 2000){	
		pontos = 3;
		printf("A cesta acumulou %d pontos.", pontos);
}
	else{
		printf("Distancia %.2f invalida.", d);
}
	return 0; 
}
