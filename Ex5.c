#include<stdio.h>
#include<math.h>
int main()
{
	int numero, numAoQuadrado;
	float raizDoNum;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	if(numero > 0){
		printf("\nNumero elevado ao quadrado: %d", numAoQuadrado = numero*numero);
		printf("\nRaiz quadrada do numero: %.1f", raizDoNum = sqrt(numero));
	}else 
	   printf("\nO numero nao e positivo");
}
  
