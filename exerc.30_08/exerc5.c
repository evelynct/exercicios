/*A organização da OIBR, OlimpíadaInternacional de Basquete de Robô, está começando a ter problemas.
 É que os robôs desses times acertam quase todos os lançamentos, de qualquer posiçãona quadra!
  Pensando bem, o jogo de basquete ficaria mesmo sem graça se jogadores conseguissem acertar qualquer lançamento, não é mesmo? 
  Uma das medidas que a OIBR está implantando é uma nova pontuação para os lançamentos, de acordo com a distância do robô para o início da quadra.
  A quadra tem 2000 centímetros de comprimento. Dada a distância D do robô até o início da quadra, onde está a cesta, a regra é a seguinte:?
   Se 0 = D = 800, a cesta vale 1 ponto;? Se 800 < D = 1400, a cesta vale 2 pontos;? Se 1400 < D = 2000, a cesta vale 3 pontos.
   A organização da OIBR precisa de ajuda para automatizar o placar dojogo. Dado o valor da distância D (que não deve ser negativa e nem maior que
os 2000 centímetros do tamanho da quadra), você deve escrever um programapara calcular o número de pontos do lançamento*/

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
