#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	puts("Categoria de Nadadores");
	puts("Digite a sua idade para saber em qual categoria você entrará");
	scanf("%d", &idade);
	
	if(idade >=5 && idade <= 7){
		printf("Sua idade é de %d anos e sua Categoria Infantil A \n", idade);
	}
	else { if (idade >= 8 && idade <=10){
		printf("Sua idade é de %d anos e sua Categoria Infantil B \n", idade);
	}
	else { if (idade >= 11 && idade <= 13){
		printf("Sua idade é de %d anos e sua Categoria Juvenil A \n", idade);
	}
	else { if (idade >= 14 && idade <= 17){
		printf("Sua idade é de %d anos e sua Categoria Juvenil B \n", idade);
	}
	else { if(idade >= 18){
		printf("Sua idade é de %d anos e sua Categoria Senior \n", idade);
	}
	}
	}
	}
	}
	
	system("PAUSE");
	return(0);
}
