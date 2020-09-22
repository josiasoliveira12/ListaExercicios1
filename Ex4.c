#include<stdio.h>
int main()
{
	float A, r, h, Pi=3.14;
     printf("Entre com o raio: ");
     scanf("%f", &r);
     printf("Entre com a atura: ");
     scanf("%f", &h);
     
	A = 2 * Pi * r *(r + h);
	printf("\nArea do cilindro = %.1f", A);
	
}
