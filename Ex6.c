#include<stdio.h>
int main()
{
	int numUm, numDois;
	printf("Digite dois numero: ");
	scanf("%d%d", &numUm, &numDois);
	if(numUm > numDois)
		printf("\nnumero maior: %d", numUm);
		else
	        printf("\nnumero maior: %d", numDois);
}
