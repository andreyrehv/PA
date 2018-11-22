#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float VH, HT, SB, SL;
	int dep, funcionario = 1;
	
	int Func=1;
	do{
		printf("Calculando as horas trabalhadas do funcionario %d.\n", funcionario);
		puts("Digite o valor da hora.");
		scanf("%f", &VH);
		puts("Digite a quantidade de horas trabalhadas no mês.");
		scanf("%f", &HT);
		puts("Digite o numero de dependentes.");
		scanf("%f", &dep);
		
		SB= (VH * HT);
		SL= SB+(dep * 300);
		
		printf("O salario bruto do funcionario é R$ %.2f \n", SB );
		printf("O salario liquido do funcionario é R$ %.2f \n", SL);
		Func++;
		funcionario++;
	}while(Func <= 10);
	
	system("PAUSE");
	return(0);
	
}
