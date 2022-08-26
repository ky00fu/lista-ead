#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	

	int resposta, res1, res2, res3, res4, res5;

	printf("Você telefonou para vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res1);

	
	if(res1 == 1)
	{
		resposta = resposta + 1;
	}
		
	printf("\nEsteve no local do crime?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res2);
	

	if(res2 == 1)
	{
		resposta = resposta + 1;
	}
					
	printf("\nMora perto da vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res3);
	
	if(res3 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\nDevia para a vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res4);
	
	if(res4 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\nJá trabalhou com a vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res5);
	
	if(res5 == 1)
	{
		resposta = resposta + 1;
	}
	
	printf("\n\nVocê respondeu %d pergunta(s) positivamente...\n\n",resposta);		
	
	if(resposta == 5)
	{
		printf("\nVocê é o ASSASSINO");
	}
	else if(resposta == 4 || resposta == 3)
	{	
		printf("\nVocê é CÚMPLICE");
	}
	else if(resposta == 2)
	{
		printf("\nVocê é SUSPEITO");
	}
	else
	{
		printf("\nVocê é INOCENTE");
	}
}

