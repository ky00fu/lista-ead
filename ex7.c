#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	

	int resposta, res1, res2, res3, res4, res5;

	printf("Voc� telefonou para v�tima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: N�O\n");
	scanf("%d",&res1);

	
	if(res1 == 1)
	{
		resposta = resposta + 1;
	}
		
	printf("\nEsteve no local do crime?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: N�O\n");
	scanf("%d",&res2);
	

	if(res2 == 1)
	{
		resposta = resposta + 1;
	}
					
	printf("\nMora perto da v�tima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: N�O\n");
	scanf("%d",&res3);
	
	if(res3 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\nDevia para a v�tima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: N�O\n");
	scanf("%d",&res4);
	
	if(res4 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\nJ� trabalhou com a v�tima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: N�O\n");
	scanf("%d",&res5);
	
	if(res5 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\n\nVoc� respondeu %d pergunta(s) positivamente...\n\n",resposta);		
	
	if(resposta == 5)
	{
		printf("\nVoc� � o ASSASSINO");
	}
	else if(resposta == 4 || resposta == 3)
	{	
		printf("\nVoc� � C�MPLICE");
	}
	else if(resposta == 2)
	{
		printf("\nVoc� � SUSPEITO");
	}
	else
	{
		printf("\nVoc� � INOCENTE");
	}
}

