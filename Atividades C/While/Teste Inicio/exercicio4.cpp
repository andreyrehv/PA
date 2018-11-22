#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main (){
	setlocale(LC_ALL, "Portuguese");
	int p,h;
	float alt,imc;
	
	
	puts("digite nº1 para calcular ou n°2 ora não calcular ");
	scanf("%d",&p);
	
	
	while (p<=7){
		puts("Digite 1 se for homem ou 2 se for mulher ");
		scanf("%d",&h);
		puts("digite a sua altura");
	scanf("%f", &alt);

	
	if (h==1){
	imc = (72.7*alt)-58;
	printf("SEU PESO IDEAL É %f",imc);
}
	else{
		imc = (62.1*alt)-58;
	printf("SEU PESO IDEAL É %f",imc);
	
	}
	
	
	
	p++;

	
}
	return(0);
}
