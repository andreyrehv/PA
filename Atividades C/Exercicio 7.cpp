#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float BS,ALT,A;
	
	puts("Digite a base do tri�ngulo");
	scanf("%f", &BS);
	puts("Digite a altura do tri�ngulo");
	scanf("%f",&ALT);
	
	A=(BS*ALT)/2;
	
	printf("A area do tri�ngulo � %.2f", A);
	system("PAUSE");
	return(0);
	
}
