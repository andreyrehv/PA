#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float bs,H,A;
	
	puts("Digite a base do ret�ngulo:");
	scanf("%f",&bs);
	puts("Digite a altura do ret�ngulo");
	scanf("%f",&H);
	
	A= bs*H;
	
	printf("A �rea do ret�ngulo � %.2f", A);
	system("PAUSE");
	return(0);
}
