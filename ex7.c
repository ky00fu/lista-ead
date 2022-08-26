#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
<<<<<<< HEAD
	int resposta, res1, res2, res3, res4, res5;

	printf("Você telefonou para vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res1);
=======
	/*
	- telefonou para vitima?
	- esteve no local do crime?
	- mora perto da vitima?
	- devia para a vitima?
	- ja trabalhou com a vitima?
>>>>>>> e7cb961bbe043c8dbe1a4f3569d6ae31f0392e2e
	
	if(res1 == 1)
	{
		resposta = resposta + 1;
	}
		
	printf("\nEsteve no local do crime?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("0: NÃO\n");
	scanf("%d",&res2);
	
<<<<<<< HEAD
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
=======
	int resposta;
	
	printf("Você telefonou para vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("2: NÃO\n");
	scanf("%d",&resposta);
	
	if(resposta = 1)
	{
		resposta = resposta++;
	}	
	
	printf("Esteve no local do crime?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("2: NÃO\n");
	scanf("%d",&resposta);	
	
	if(resposta = 1)
	{
		resposta += resposta;
	}
	
	printf("Mora perto da vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("2: NÃO\n");
	scanf("%d",&resposta);
	
		if(resposta = 1)
	{
		resposta += resposta;
	}

	
	printf("Devia para a vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("2: NÃO\n");
	scanf("%d",&resposta);
	
		if(resposta = 1)
	{
		resposta += resposta;
	}

	
	printf("Já trabalhou com a vítima?\n");
	printf("Digite:\n");
	printf("1: SIM\n");
	printf("2: NÃO\n");
	scanf("%d",&resposta);

		if(resposta = 1)
	{
		resposta += resposta;
	}
	
	

>>>>>>> e7cb961bbe043c8dbe1a4f3569d6ae31f0392e2e
}

