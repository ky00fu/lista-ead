#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salario,novoS;
	
	printf("Digite seu salário atual: ");
	scanf("%f",&salario);
	
	if(salario <= 280){
		printf("Salário anterior: R$%.2f\n",salario);
		printf("Percentual de aumento: 20%%\n");
		printf("Valor do aumento: R$%.2f\n",novoS=salario*20/100);
		printf("Novo salário: R$%.2f\n",novoS+salario);
	}else if(salario > 280 && salario <= 700){
		printf("Salário anterior: R$%.2f\n",salario);
		printf("Percentual de aumento: 15%%\n");
		printf("Valor do aumento: %.2f\n",novoS=salario*15/100);
		printf("Novo salário: R$%.2f\n",novoS+salario);
	}else if(salario > 700 && salario <= 1500){
		printf("Salário anterior: R$%.2f\n",salario);
		printf("Percentual de aumento: 10%%\n");
		printf("Valor do aumento: %.2f\n",novoS=salario*10/100);
		printf("Novo salário: R$%.2f\n",novoS+salario);
	}else{
		salario > 1500;
		printf("Salário anterior: R$%.2f\n",salario);
		printf("Percentual de aumento: 5%%\n");
		printf("Valor do aumento: %.2f\n",novoS=salario*5/100);
		printf("Novo salário: R$%.2f\n",novoS+salario);
	}
}
