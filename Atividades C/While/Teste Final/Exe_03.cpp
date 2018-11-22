#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int AN, res, pessoa = 1, pe = 1;

	do{	
	puts("Maioridade");
	printf("Digite o ano de nascimento da %d ª pessoa. \n", pessoa);
	scanf("%d",&AN);
	
	res= 2018-AN;
	
		
	if(res>=18){
		printf("Você tem %d e atingiu a maioridade \n", res);
	}else{
		printf("Você tem %d e é menor de idade \n", res);
	}
	
	pessoa++;
	pe++;
	}while(pessoa<=15);

	system("PAUSE");
	return(0);
}
