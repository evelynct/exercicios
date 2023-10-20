/*Em uma loja de eletrodomésticos, as compras têm um preço à vista, ou acréscimo de 10 % parapagamentos em 2 vezes, ou ainda, acréscimo de 20% para pagamento em 3 vezes.
 O algoritmodeve pedir para o usuário digitar o valor da compra à vista e a opção de compra. O algoritmo deveexibir qual o valor final a ser pago*/
 #include <stdio.h>
 int main(){
 	
		float preco, total;
		int parce;
		
			printf("Digite o preco do produto: \n");
			scanf("%f", &preco);
			
			printf("Digite de a 1 ate 3 em quantas vezes o cliente vai pagar: \n");
			scanf("%d", &parce);
		
		switch(parce){
			
			case 1:
				printf("O valor a ser pago eh: %.2f.\n", preco);
				break;
			case 2:
				total = (preco/100) * 10 + preco;
				printf("O valor a ser pago eh: %.2f.\n", total);
				break;
			case 3:		
				total = (preco/100) * 20 + preco;
				printf("O valor a ser pago eh: %.2f.\n", total);
				break;
			default:
				printf("Tente novamente...");		}
 	return 0;
 }
