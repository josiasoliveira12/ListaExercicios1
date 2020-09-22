#include<stdio.h>
int main()
{
	int ValorMbps, ValorKbps;
	
	printf("Digite o numero em Mbps: ");
	scanf("%d", &ValorMbps);
	
	ValorKbps = ValorMbps * 1000;
	printf("\nValor em Kbps: %d", ValorKbps);
	
}
