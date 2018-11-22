#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float multa, qtd;
	int  pesc = 1;
	
	do{
		puts("PESCARIA ;)");
		printf("Digite a quantidade de kg do %dº pescador \n", pesc);
		scanf("%f", &qtd);
		
		if(qtd>50){
			multa= 4*(qtd-50);
			printf("Você excedeu ao limite por pessoa e pagará uma multa de R$ %.2f \n", multa);
		}else{
			printf("Esta dentro do limite. \n");
		}
		
		pesc++;	
	}while(pesc<=5);
	
	system("PAUSE");
	return(0);
}
