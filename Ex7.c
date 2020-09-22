#include<stdio.h>
int main()
{
	int bolaVerde, bolaAmarela, bolaBranca, pontuacaoFinal;
	
	printf("Quantidade de bolas verdes: ");
	scanf("%d", &bolaVerde);
	printf("Quantidade de bolas amarela: ");
	scanf("%d", &bolaAmarela);
	printf("Quantidade de bola branca : ");
	scanf("%d", &bolaBranca);
	
	pontuacaoFinal = bolaVerde * 10 + bolaAmarela * 5 + bolaBranca * 3;
	printf("\nPotunacao final do participante: %d",pontuacaoFinal);
	
}

















