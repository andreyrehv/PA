#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	float multa, qtd;
	int  pesc = 1;
	
	do{
		puts("PESCARIA ;)");
		printf("Digite a quantidade de kg do %d� pescador \n", pesc);
		scanf("%f", &qtd);
		
		if(qtd>50){
			multa= 4*(qtd-50);
			printf("Voc� excedeu ao limite por pessoa e pagar� uma multa de R$ %.2f \n", multa);
		}else{
			printf("Esta dentro do limite. \n");
		}
		
		pesc++;	
	}while(pesc<=5);
	
	system("PAUSE");
	return(0);
}
