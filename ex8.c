#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int produto;
	float valor;
			
	printf("Lojas Quase Dois -- Tabela de Preços\n");
	
	for(produto = 1; produto <= 50; produto++){
		valor = produto * 1.99;
		printf("%d - R$ %.2f\n",produto,valor);
	}
}
