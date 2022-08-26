#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");	
	
	int saque;
	int nota1, nota5, nota10, nota50, nota100;	
	
	printf("DIGITE O VALOR A SACAR: ");
	scanf("%d",&saque);
	
		
	if(saque <= 10 || saque > 600)
	{
		printf("VALOR INDISPONÍVEL\n");
		printf("VALOR MÍNIMO: R$10\n");
		printf("VALOR MÁXIMO: R$600\n");
	}
	
	nota100 = saque / 100;
	printf("%d NOTAS DE R$100\n",nota100);

	saque = saque % 100;
	nota50 = saque / 50;
	printf("%d NOTAS DE R$50\n",nota50);		
	
	saque = saque % 50;
	nota10 = saque / 10;
	printf("%d NOTAS DE R$10\n",nota10);
	
	saque = saque % 10;
	nota5 = saque / 5;
	printf("%d NOTAS DE R$5\n",nota5);
	
	saque = saque % 5;
	nota1 = saque / 1;
	printf("%d NOTAS DE R$1\n",nota1);
}
//OK
