#include<stdio.h>
int main()
{
     float ValorDisponivel, CotDolar, ValorConvertido;
	
	printf("Digite a cotacao do dolar: (US$) ");
	scanf("%f", &CotDolar);
	printf("\nDigite o valor a ser convertido: (R$) ");
	scanf("%f", &ValorDisponivel);
	
	ValorConvertido = ValorDisponivel / CotDolar;
	printf("\nValor convertido em dolar: (US$) %.2f ", ValorConvertido);
	
}
