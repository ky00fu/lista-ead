#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float peso,valor;
	
	printf("Digite o peso (kg) dos peixes.\n");
	scanf("%f",&peso);
	
	if(peso>50){
		peso = peso- 50;
		valor = peso * 4;
		printf("Peso acima da regulamentação: %.2f kg.\nMulta a ser paga: R$%.2f.",peso,valor);
	}else{
		printf("Você não excedeu o peso máximo, portanto não pagará multa.");
	}
}
