#include<stdio.h>
int main()
{
	double CustoDeFabrica, PorcenDistr, PorcenImpos, CustoCons;
	printf("Custo de fabrica: ");
	scanf("%lf", &CustoDeFabrica);
	
	PorcenDistr = CustoDeFabrica * 25 / 100;
	PorcenImpos = CustoDeFabrica * 42 / 100;
     CustoCons = CustoDeFabrica + PorcenDistr + PorcenImpos;    
     printf("\nCusto ao consumidor: R$%.2lf", CustoCons);
}
















 
