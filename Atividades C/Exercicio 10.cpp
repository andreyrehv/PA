#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float VH,HT,BN,ND,SB,SL;
	
	BN=300;
	
	puts("Digite o valor da hora");
	scanf("%f", &VH);
	puts("Digite a quantidade de horas trabalhadas no mês");
	scanf("%f", &HT);
	puts("Digite o numero de dependentes");
	scanf("%f", &ND);
	
	SB=VH*HT;
	SL=SB+(BN*ND);
	
	printf("Seu salario bruto é de:%.2f e o salario liquido é:%.2f \n", SB, SL);
	system("PAUSE");
	return(0);
	
}
