#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float BS,ALT,A;
	
	puts("Digite a base do triângulo");
	scanf("%f", &BS);
	puts("Digite a altura do triângulo");
	scanf("%f",&ALT);
	
	A=(BS*ALT)/2;
	
	printf("A area do triângulo é %.2f", A);
	system("PAUSE");
	return(0);
	
}
