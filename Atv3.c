#include<stdio.h>
int main()
{
	int DiaSemana;
	scanf("%d", &DiaSemana);
	printf("Dia da semana correspondente: ");
	switch(DiaSemana){
     case 1:
	   printf("domingo");
	break;
	
	case 2:
	   printf("segunda-feira");
	break;
	
	case 3:
	   printf("terca-feira");
	break;
	
	case 4:
	   printf("quarta-feira");
	break;
	
	case 5:
	   printf("quinta-feira");
	break;
	
	case 6:
	   printf("sexta-feira");
	break;
	
	case 7:
	   printf("sabado");		
  }
}
