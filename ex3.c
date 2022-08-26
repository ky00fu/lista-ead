#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float area,litro;
		
	printf("Qual o tamanho da área (m²)?\n");
	scanf("%f",&area);
	
	if(area >= 6){
		litro = area/6;		
		printf("\nVocê pode comprar %.0f lata(s) por R$%.2f\n\nOU\n\n",litro/18,litro/18*80);
		printf("%.0f galão(ões) por R$%.2f\n",litro/3.6,litro/3.6*25);
	}else{
		printf("ERRO: DIGITE UM VALOR ADEQUADO\n");
	}
}
