#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float hora,mes,salario;
	
	printf("Quanto voc� ganha por hora?\n");
	scanf("%f",&hora);
	printf("Qual sua carga hor�ria por m�s?\n");
	scanf("%f",&mes);
	
	printf("\n+ Sal�rio Bruto : R$ %.2f\n",salario=hora*mes);
	printf("- IR (11%%) : R$ %.2f\n",salario * 11/100);
	printf("- INSS (8%%) : R$ %.2f\n",salario * 8/100);
	printf("- IR (11%%) : R$ %.2f\n",salario * 5/100);
	printf("\n= Sal�rio L�quido : R$ %.2f\n",salario - salario * 24/100);
}
