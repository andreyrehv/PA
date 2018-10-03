#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float bs,H,A;
	
	puts("Digite a base do retângulo:");
	scanf("%f",&bs);
	puts("Digite a altura do retângulo");
	scanf("%f",&H);
	
	A= bs*H;
	
	printf("A área do retângulo é %.2f", A);
	system("PAUSE");
	return(0);
}
