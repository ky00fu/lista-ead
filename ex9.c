#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int pao;
	float preco;
	
	printf("Pre�o do p�o: R$0.18\n");
	printf("Panificadora P�o de Ontem -- Tabela de Pre�os\n");
	
	for(pao = 1; pao <= 50; pao++){
		preco = pao*0.18;
		printf("%d - R$%.2f\n",pao,preco);
	}
}
